#!/bin/bash

socat=$(which socat)
if [ $? -ne 0 ]; then
    echo "socat not found, please install package socat"
    exit 1
fi

if [ $# -lt 2 ]; then
    echo "usage: $0 <test case> <test data> [test parameters]"
    echo "       test case indicates which test to run e.g. daisyonline-service-10/axis2dologon"
    echo "       test data indicates which folder to use for test data e.g. daisyonline-service-10/logOn"
    echo "       test parameters are not currently supported"
    echo
    echo "note:  specify full path for parameters <test case> and <test data>"
    echo
    exit 1
fi

if [ -x /usr/bin/gdb ]; then
    PREFIX="libtool --mode=execute gdb -return-child-result -x ${srcdir:-.}/run --args"
fi

# run with valgrind
if [ $# -ge 3 ] && [ $3 = 'valgrind' ]; then
    if [ -x /usr/bin/valgrind ]; then
        PREFIX="libtool --mode=execute valgrind --leak-check=full --tool=memcheck --suppressions=${srcdir:-.}/memoryleak.supp"
    fi
fi

if [ ! -f $1 ]; then
    echo "test case '$1' does not exist"
    exit 1
fi

if [ ! -d $2 ]; then
    echo "test data '$2' does not exist"
    exit 1
fi

kill_socat()
{
    local port=$1
    line=`ps ax | grep socat | grep $port`
    pid=`echo $line | cut -d ' ' -f1`
    kill $pid
}

unset_axis2c_home()
{
    if ! [ -z "$AXIS2C_HOME" ]; then
        echo "Setting AXIS2C_HOME forces logs to be written to that dir, so don't!"
        exit 1
    fi
}

port_in_use()
{
    local port=$1
    #echo "checking if port $port is in use"
    output=`lsof -i -P -n | grep ":$port"`
    if [ ! -z "$output" ]; then
        return 0 # port is in use
    fi
    return 1 # port is not in use
}

unset_axis2c_home

# find available port
PORT=$$
if [ $PORT -lt 1025 ]; then
    PORT=`expr $PORT + 1024`
fi

while port_in_use $PORT; do
    echo "looping"
    PORT=`expr $PORT + 1`
done

# determine which protocol to use, default https
PROTOCOL='https'

# if the third parameter is present and its value is http, then use http as transport protocol
if [ $# -ge 3 ] && [ $3 = 'http' ]; then
    PROTOCOL='http'
fi

# Uncomment to use fixed values
#PORT=11111
#PROTOCOL='http'

orderfile="${2##*/}.order"
echo -n 1 > $orderfile

file=`readlink -f $0`
path=`dirname $file`
fakesoap="${path}/fakesoapresponder.sh"
if [ $PROTOCOL = 'http' ]; then
    socat TCP4-LISTEN:$PORT,fork,tcpwrap=script EXEC:"$fakesoap $2 $orderfile" &
else
    cert="${path}/ssl-server-crt.crt"
    key="${path}/ssl-private-key.key"
    socat OPENSSL-LISTEN:$PORT,fork,tcpwrap=script,cert=$cert,key=$key,verify=0 EXEC:"$fakesoap $2 $orderfile" &
fi

# setup test parameters
uri="$PROTOCOL://localhost:$PORT"
username="test"
password="test"

$PREFIX $1 $uri $username $password $orderfile
retval=$?

kill_socat $PORT

if [ $retval = 0 ]
then
    exit 0
else
    exit -1
fi
