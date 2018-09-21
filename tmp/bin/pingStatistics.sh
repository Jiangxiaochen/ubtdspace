#!/bin/bash
host=(hmb.jxxt.tk)
i=0
while [ $i -lt ${#host[@]} ]; do
    ele=${host[${i}]}
    let "i++"
    log_time=`date +"%Y/%m/%d %H:%M:%S"`
    ping -c 4 $ele | tail -n 2 > /tmp/pingLogTmpJxc
	hah=`head -n 1 /tmp/pingLogTmpJxc | cut -d ',' -f 3` 
	bbb=`tail -n 1 /tmp/pingLogTmpJxc` 
	log="$log_time,$hah, $bbb"
	echo $log >> /root/log/ping.$ele.log
done

rm -rf /tmp/pingLogTmpJxc

