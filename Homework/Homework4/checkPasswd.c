#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
//Declaring variables
char c;
int len=0,score;
printf("Enter a password :"); //User input for pw
while ((c = getchar()) != '\n') { //checks length 
len++;
}
if(len<10) { //minus points based on lengthh
score=(10-len)*5;
}
//based on deduction score display message
if(score>30) {
	printf("The password is unsafe! Please reset\n");
}
else {
	printf("The password is safe\n");
}
return 0;
}