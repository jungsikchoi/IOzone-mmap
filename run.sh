#!/bin/sh
#./iozone -i 0 -i 1 -+n -s 1024k -r 4k -B -+R
./iozone -i 0 -i 1 -+n -s 4096k -r 4k -B -+R
dmesg > dmesg.log
