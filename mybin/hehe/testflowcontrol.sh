for var in a 2 b 3 c 4
do 
	echo $var
done

echo ------------------------------

for char in 'hllo halo hello'
do
	echo $char
done

echo ------------------------------

index=0
index2=0
while(( $index <= 5))
do
#    let "index++"
    index=`expr $index + 1`
    echo $index
done

index3=`expr 1 + 1`
echo index2 $index3
