#!/bin/bash
mkdir build
cp ./wsServer/src/base64/base64.c ./build/
cp ./wsServer/src/handshake/handshake.c ./build/
cp ./wsServer/src/sha1/sha1.c ./build/
cp ./wsServer/src/utf8/utf8.c ./build/
cp ./wsServer/src/ws.c ./build/
cp ./wsServer/include/* ./build/
cp ./wsServer.c ./build/
cd ./build
gsc -obj *.c
ar -crs ../libWSPlus.a *.o


#gcc  -O1 -fexpensive-optimizations -fno-gcse    -Wno-unused -Wno-write-strings -Wdisabled-optimization -fwrapv -fno-strict-aliasing -fno-trapping-math -fno-math-errno -#fschedule-insns2 -fomit-frame-pointer -fipa-ra -fmove-loop-invariants -march=x86-64 -fPIC -fno-common -mpc64   -D___SINGLE_HOST -D___CAN_IMPORT_CLIB_DYNAMICALLY -#D___CAN_IMPORT_SETJMP_DYNAMICALLY  -I"/usr/local/Gambit/include" -c -o 'base64.o'  'base64.c'
