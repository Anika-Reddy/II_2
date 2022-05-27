echo "enter the value of a b c" 
read a
read b
read c
if [ $a -gt $b -a $a -gt $c ]
then
echo "$a is Greatest"
elif [ $b -gt $c -a $b -gt $a ]
then
echo "$b is Greatest"
else 
echo "$c is Greatest"
fi
