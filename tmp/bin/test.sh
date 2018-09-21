

#cat /root/log/ping.hmb.jxxt.tk.log | while read line; do
#	avg=`echo $line | cut -d ',' -f 3 | awk '{print $4}' | cut -d '/' -f2`
#	avg=`echo $line | cut -d '/' -f7`
#	result=`echo "$avg>$1" | bc	`
#test $result -eq 1 && echo $line
#	test `echo "$(echo $line | cut -d '/' -f7)>$1" | bc` -eq 1 && echo $line
#done

awk -F '[/]' -v "num=$1" '$7>=num {print}' /root/log/ping.hmb.jxxt.tk.log 
