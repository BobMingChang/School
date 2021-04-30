#!/bin/bash
PS3='How would you like to edit the Phone Book?'
choices=("Read" "Write" "Edit" "Quit")
select pick in "${choices[@]}"; do
	case $pick in 
		"Read")
			awk '{ print }' PhoneBookExample.txt
			;;
		"Write")
			echo Please write down your addition to the Phone Book.
			read words
			echo $words >> PhoneBookExample.txt
			;;
		"Edit")
			sed -i 's/Bob/Bill/g' PhoneBookExample.txt
			echo Bob has been renamed to Bill!
			;;
		"Quit")
			echo "Shutting down."
			exit
			;;
		*) echo "Invalid input $REPLY" ;;
	esac
done 
