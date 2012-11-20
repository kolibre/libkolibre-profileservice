#!/bin/bash -e

#usage: <test framework> <test case> <test data>
${srcdir:-.}/../soaptester.sh ${bindir:-.}/faultnoactivesession ${srcdir:-.}/faults/noActiveSession
