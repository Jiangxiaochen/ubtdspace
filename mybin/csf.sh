`locate "$1" > a`
num=` wc -l < a`
echo "there are $num files for $1"

cat a | while read line
do
    result=`cat $line | grep $2`
    if [ "$result" != "" ]
    then
        echo $line" :"
        echo $result
        echo "****************"
    fi
done




