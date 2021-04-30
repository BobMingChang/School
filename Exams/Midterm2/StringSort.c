#include<stdio.h>
#include <string.h>

void sort_alphabetic(char *arr[], char input);
int main(){
        //Charater inputs within the array
        char *arr[8] = {"Systems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"};
        int i;
        char input;
        printf("Array is : \n");
        for(i=0;i<8;i++){
                printf("%s    ", arr[i]);
        }
        //Setting up the user choices
        printf("\n\nEnter A/a for ascending order, D/d for descending order: ");
        scanf("%c", &input);
        sort_alphabetic(arr, input);
        printf("\nArray after sort : \n");
        for(i=0;i<8;i++){
                printf("%s    ", arr[i]);
        }
        return 0;
}
//function to sort array
void sort_alphabetic(char *arr[], char input){
        int i,j;
        //acending sort
        if(input == 'A' || input == 'a'){
                for (i = 0; i < 7 ; i++){
                for (j = i + 1; j < 8; j++){      
                                //compares each String with  another String
                                //if first string is greater, swap them
                    if (strcasecmp(arr[i], arr[j]) > 0) {
                        char *temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                                }
                }
            }
        }
        //decending sort
        else if(input == 'D' || input == 'd'){
                for (i = 0; i < 7 ; i++){

                for (j = i + 1; j < 8; j++){
        
                                //compares each String with  another String
                                //if first string is lesser, swap them
                    if (strcasecmp(arr[i], arr[j]) < 0) {
                        
                        char *temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    
                                }
                }
            }
        }
        //wrong input
        else{
                printf("\nWrong Input!");
        }
}