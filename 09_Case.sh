#!/bin/bash

echo "Provide an Option"
echo "a - Print date"
echo "b - For list of scripts"
echo "c to check current locations"

read -p "Enter Your choice : " choice

case $choice in 
	a)date;;
	b)ls;;
	c)pwd;;
esac
