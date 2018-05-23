#!/bin/sh

if date | grep Tue
then
	echo time for backup. insert tape and press enter
	read x
	tar -cvf ./mybak /home/ubuntu/ubtdspace 
fi
