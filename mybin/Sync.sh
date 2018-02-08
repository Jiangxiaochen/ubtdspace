dst='/usr/include/'
dir='/home/linux/jxc-workspace/'
arr[0]='csapp.c'
arr[1]='csapp.h'
arr[2]='jxcutils.c'
arr[3]='jxcutils.h'
n=3
for ((i=0;i<=$n;i++))
do
    echo ${arr[$i]} copied
    echo "123" | sudo -S cp ${dir}${arr[$i]} $dst
done

#echo "123" | sudo -S cp -f /home/linux/jxc-workspace/csapp.c $dst
#echo "123" | sudo -S cp -f /home/linux/jxc-workspace/jxcutils.h $dst
