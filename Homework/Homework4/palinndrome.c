#include<stdio.h>
#include<string.h>
#define ML 100 //set max user input length
int IP(char *sequence, int seq_length){
int ispalin=1; //set value for if input is a palindrone
char RS[ML]; //variable to keep reverse of the sequence
int j=0; //variable to keep current index of reverse sequence
int i;
for (i = seq_length-1; i >= 0; i--) {
	RS[j]=sequence[i];
	j++;
}
RS[j]='\0'; //ending the sequence with null character to make it a string
for (i = 0; i < seq_length; i++) {
	if (sequence[i]!=RS[i]) {// if any character mismatches sequence is not palindrome as reverse does not match the sequence
		ispalin=0;
		break;
	}
}
return ispalin;
}
int main()
{
char sequence[ML];
printf("Enter the sequence: ");
scanf("%s",sequence); // taking input from user from stdio
if (IP(sequence,strlen(sequence))) { //IP takes 2 arguements one is sequence and other is length of the sequence
	printf("%s is a palindrome\n",sequence);
}
else {
	printf("%s is not palindrome\n",sequence);
}
return 0;
}