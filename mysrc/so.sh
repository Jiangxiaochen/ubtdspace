SO_NAME='libjxc.so'
HEAD_NAME='jxcutils.h'

gcc -shared -fpic -o $SO_NAME *.c
cp $SO_NAME /usr/lib/x86_64-linux-gnu/
cp $HEAD_NAME /usr/include/ 
