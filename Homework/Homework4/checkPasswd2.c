#include <stdio.h>
#include <string.h>
//For Question 2
int main() {
char password[25]; // char array for storing pw
int points = 100,len; // initial points for pw=100
int lower_count = 0,upper_count=0,num_count=0,consecutive_count = 0;
printf("Enter the password: ");
scanf("%s",password); //User input for pw
len = strlen(password); //checks length 
int i;
for(i=0;i<len;i++) { //checks for lower case
	if(password[i] >= 'a' && password[i] <= 'z') {
	lower_count += 1;
	}
}
if(lower_count <= 0)	{
	points -= 20; // -20 points if mssing lowercase
}
for(i = 0;i<len;i++) { //checks if upper case is present
if(password[i] >= 'A' && password[i] <= 'Z') {
upper_count += 1;
	}
}
if(upper_count < 2) {
points -= 20; //decrease points by 20...
}
for(i = 0;i<len;i++) //checks to see if numbers are present
{
if(password[i] >= '0' && password[i] <= '9') {
num_count += 1;
	}
}
if(num_count <= 0) {
points -= 20; //decrease points by 20 if no numbers are present
}
for(i=0;i<len;i++) { //checks for consecutive characters
int j;
for(j = i+1;j<len;j++) {
//check the next character is greater in one step in ASCII value of previous one...
if(password[j] - password[i] == 1) {
consecutive_count += 1;
		}
	}
}
  
if(consecutive_count >= 2) {
points -= 20; //decrease points by 20 when there are more than 2 consecutive characters
}
if(points < 70) {
printf("\nThe password is unsafe! Please reset.");
}
else {
printf("The password is safe.");
}
return 0;
}