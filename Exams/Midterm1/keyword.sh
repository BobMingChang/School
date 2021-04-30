echo Please choose a word
read word
tr -s " " "\n" < myexamfile.txt | grep -c $word
