#!/bin/bash -e

#usage: <test framework> <test case> <test data> <test order>
${srcdir:-.}/../soaptester.sh ${bindir:-.}/logon ${srcdir:-.}/logOn
