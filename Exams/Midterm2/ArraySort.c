#include <stdio.h>
#include <stdlib.h>

// Function to sort the numbers using pointers
void sort_numeric(float ptr[], int n, char sortType){
	if(sortType == 'a' || sortType == 'A'){
        int i, j;
		float t;
        // Sort the numbers to acending order using pointers
        for (i = 0; i < n; i++) {
                for (j = i+1; j < n; j++) {
                        if (*(ptr + j) < *(ptr + i)) {
                                t = *(ptr + i);
                                *(ptr + i) = *(ptr + j);
                                *(ptr + j) = t;
                        }
                }
        }
}
else {
        int i, j;
		float t;
        // Sort the numbers to decending order using pointers
        for (i = 0; i < n; i++) {
                for (j = i+1; j < n; j++) {
                        if (*(ptr + j) > *(ptr + i)) {
                                t = *(ptr + i);
                                *(ptr + i) = *(ptr + j);
                                *(ptr + j) = t;
								}
                        }
                }
        }
}

int main() {
int n ; // # of elements for the array
float *ptr;
ptr = (float*)malloc(n * sizeof(float));
// taking input from the user
printf("Enter the size of the array: ");
scanf("%d", &n) ;
float val ;
int i;
char ch ;
printf("Enter the elements of the array: ");
for(i = 0 ; i < n; i++){
scanf("%f", &val ) ;
*(ptr + i ) = val ;
}
printf("\nEnter the sort type(a or A or d or D:");
scanf("%c",&ch);
scanf("%c",&ch);
sort_numeric(ptr, n, ch);
printf("Your array after sorting:\n");
for(i = 0 ; i < n; i++)
printf("%f ", *(ptr + i));
printf("\n");
return 0;
}