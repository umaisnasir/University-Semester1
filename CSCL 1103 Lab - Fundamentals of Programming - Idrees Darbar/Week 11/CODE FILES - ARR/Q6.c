// Write a program to search for a specific element in an array and determine its index.

#include <stdio.h>

int main (void){

    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d",&SizeArray);

    int Array[SizeArray];
    int num;

    for (int i = 0; i<SizeArray; i++){

        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &num);

        Array[i] = num;
    }

    int user_input;

    printf("Enter any recent input to check it's corresponding index position: ");
    scanf("%d", &user_input);

    for (int i = 0; i < SizeArray; i++){

        if (Array[i] == user_input){    // if the value user inputted is equals to a certain array element's value.
            printf("The index of this value is: %d", i);
        }
    }
}