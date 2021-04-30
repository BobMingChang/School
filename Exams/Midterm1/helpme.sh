#!/bin/bash
PS3='Choose one of the following commands:'
Commands=("ls" "cd" "mkdir" "rmdir" "cp" "rm" "mv" "chmod" "man" "ssh" "Quit")
select choice in "${Commands[@]}"; do
	case $choice in
		"ls")
			sed -n '1,257p;258q' mandatabase.txt
			;;
		"cd")
			sed -n '259,573p;574q' mandatabase.txt
			;;
		"mkdir")
			sed -n '575,637p;638q' mandatabase.txt
			;;
		"rmdir")
			sed -n '639,695p;696q' mandatabase.txt
			;;
		"cp")
			sed -n '697,874p;875q' mandatabase.txt
			;;
		"rm")
			sed -n '876,985p;986q' mandatabase.txt
			;;
		"mv")
			sed -n '987,1092p;1093q' mandatabase.txt
			;;
		"chmod")
			sed -n '1094,1242p;1243q' mandatabase.txt
			;;
		"man")
			sed -n '1244,1980p;1981q' mandatabase.txt
			;;
		"ssh")
			sed -n '1982,3028p;3029q' mandatabase.txt
			;;
		"Quit")
			echo "Shutting down."
			exit
			;;
		*) echo "sorry, I cannot help you $REPLY" ;;
	esac
done

