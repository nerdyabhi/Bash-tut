
read -p "Enter Your marks : " mark

if [[ $mark -ge 80 ]]
then 
	echo "You got 1st Division"
elif [[ $mark -ge 60 ]]
then 
	echo "You got 2nd division"

elif [[ $mark -ge 40 ]] 
then
	echo "You passed"
else  
	echo "You Failed"
fi

echo $0
