# 打印前N行
# head N file

count=$1
sed ${count}q $2
