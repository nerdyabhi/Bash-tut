echo "Date ----> Greetings --->> "
h=$(date +%H)
if [[ h -lt 12 ]]
then
	echo "Good Morning Sir"
elif [[ h -le 17 ]]
then
	echo "Good AfterNoon Sir"
else 
	echo "Good Evening Sir"
fi

