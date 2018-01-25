a=hah
b=hah
c=haha
d= 
e=""
f=" "

echo "Ok|\n"
echo "hehe"

if [ $a == $b ]
then
echo a==b
fi

if [ $a == $c ] 
then
echo a==c
fi

if [ -z $e ] 
then 
echo -z e
fi

if [ -n $e ] 
then
echo -n e
fi

if [ $e ] 
then
echo e
fi

if [ $d ] 
then
echo d
fi
