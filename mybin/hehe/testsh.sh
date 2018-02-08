s='abcd'
echo ${#s}
echo `expr index "$s" b`

arr=(1,2,3)

a=haha
if [ $a == hahah ]
then
echo a==haha
fi

if [ $a = haaha ]
then 
echo a=haha2
fi
echo $a
echo `expr index "$*" b`
