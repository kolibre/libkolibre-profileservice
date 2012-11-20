#!/bin/bash

if [ $# -lt 2 ]; then
    echo "usage: $0 <data folder> <order file>"
    echo
    echo "data folder: should contain separate files, each containgin a"
    echo "             request/response pair in wireshark \"follow tcp stream\" format."
    echo "             files must be named 'x_action' where x is a number determining the order"
    echo "             of request and action is the soapAction found in the reqeust header, e.g. 1_logOn"
    echo
    echo "order file: a file containing a number with no new line."
    echo "            this number is used use to determine which file to use in the data folder."
    echo
    echo "hint:  use script with socat to act as a http server. the script"
    echo "       will listen for requests on stdin and send a responses on stdout"
    echo
    echo "example: socat TCP4-LISTEN:8080,fork,tcpwrap=script EXEC:\"$0 logOn logon.order\""
    echo
    echo "         test with: telnet localhost 8080"
    echo
    exit 1
fi

VERBOSE=1
debug()
{
    if [ $VERBOSE = 1 ]; then
        echo "$1" >&2
    fi
}

debug ""
debug "PID:$$ Waiting for request"

soapaction=""
read -r -t 1
contentlength=0
while [ $? -eq 0 ] && [ ${#REPLY} -ne 1 ]; do
    debug "PID:$$ Request: $REPLY"
	# If we get a soapaction, store it
	case $REPLY in
	SOAPAction*)
		soapaction="$(echo $REPLY | cut -d ':' -f 2 | tr -d "\r\n\" ")"
		;;
	Content-Length*)
		contentlength="$(echo $REPLY | cut -d ':' -f 2 | tr -d "\r\n\" ")"
		;;
	esac
	HEADERS="${HEADERS}\r\n${REPLY}"
	read -r -t 1
done

debug "PID:$$ Reading $contentlength bytes of request body $REPLY"
# read body char by char
read -r -n 1 -t 1
while [ $? -eq 0 ] && [ $contentlength -gt 1 ]; do
	BODY="${BODY}${REPLY}"
	let contentlength=($contentlength - 1)
        read -r -n 1 -t 1
done
debug "PID:$$ Request-body: $BODY"

debug ""
debug "PID:$$ Request for \"$soapaction\" complete"

if [ "$soapaction" == "" ]; then
    debug "PID:$$ Empty soapaction, cannot respond"
	exit
fi

# internal server error response
internalServerError="HTTP/1.1 500 Internal Service Error
Date: Fri, 05 Aug 2011 08:32:58 GMT
Server: Apache/2.2.9 (Debian) PHP/5.2.6-1+lenny13 with Suhosin-Patch mod_ssl/2.2.9 OpenSSL/0.9.8g mod_perl/2.0.4 P
erl/v5.10.0
X-Powered-By: PHP/5.2.6-1+lenny13
Cache-Control: no-store, no-cache, must-revalidate, post-check=0, pre-check=0
Pragma: no-cache
Content-Length: 408
Connection: close
Content-Type: text/xml; charset=utf-8

<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<SOAP-ENV:Envelope xmlns:SOAP-ENV=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:ns1=\"http://www.pratsam.org/ns/profile/\"><SOAP-ENV:Body><SOAP-ENV:Fault><faultcode>SOAP-ENV:Server</faultcode><faultstring>Internal Server Error</faultstring><faultactor></faultactor><detail><ns1:internalServerErrorFault/></detail></SOAP-ENV:Fault></SOAP-ENV:Body></SOAP-ENV:Envelope>"

# find response file
datafolder="$1"
if [ ! -d  "$datafolder" ]; then
    debug "PID:$$ Data folder '$datafolder' not found, returning InternalServerErrorFault"
    echo "$internalServerError"
    exit
fi

orderfile=$2

order=`cat $orderfile`
operation=`echo $soapaction | tr -d '/'`
responsefile="${datafolder}/${order}_${operation}"
if [ ! -f "$responsefile" ]; then
    debug "PID:$$ response file '$responsefile' not found, returning InternalServerErrorFault"
    echo "$internalServerError"
    exit
fi

# update order file for additional requests, if any?
neworder=`expr $order + 1`
echo -n $neworder > $orderfile

debug "PID:$$ Sending response from file $responsefile"
response=`sed "s/.*\(HTTP\/1.1 [0-9][0-9][0-9]\)/\n\1/g" "$responsefile" | awk '/^HTTP/ {f=1}f' | sed 's/\(.*\)/PID:'$$' Response: \1/g'`
debug "$response"
sed "s/.*\(HTTP\/1.1 [0-9][0-9][0-9]\)/\n\1/g" "$responsefile" | awk '/^HTTP/ {f=1}f'
