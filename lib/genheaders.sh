#!/bin/bash
rm ntp.h
makeheaders ntp.c
TMP=$(cat ntp.h)
echo "#include<time.h>">ntp.h
echo "$TMP">>ntp.h
