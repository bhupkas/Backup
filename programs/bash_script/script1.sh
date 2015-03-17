
file="/home/bhupkas/Desktop/F/bhupkas/data/programming/bash_script/input.txt"
while read line
do
	if [ "foo" = "foo" ]; then
               echo expression evaluated as true
    fi
	echo "$line"
done <"$file"

