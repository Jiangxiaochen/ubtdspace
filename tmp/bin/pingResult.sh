#echo $0 $1 $2 $3
if [ $# -lt 2 -o $# -gt 3 ]; then 
	echo "usage: sh pingResult.sh host opr [val]"
	exit 1
fi
file=/root/log/ping.$1.jxxt.tk.log

case $2 in
	loss)
		grep -v " 0%" $file
		;;
	delay)
#		while read line; do
#			test `echo "$(echo $line | cut -d '/' -f7)>=$3" | bc` -eq 1 && echo $line
#		done < $file 
		if [ $3 -lt 0 ]; then
			num=$((0 - ${3}))
			awk -F '[/]' -v "num=$num" '$7<num {print}' $file
		else
			awk -F '[/]' -v "num=$3" '$7>=num {print}' $file
		fi
		;;
	avg)
		
		;;
	*)
		exit 1
		;;
esac
