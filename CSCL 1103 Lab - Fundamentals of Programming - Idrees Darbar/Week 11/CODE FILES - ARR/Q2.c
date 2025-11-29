// Create a program to find the largest element in an array of numbers.

#include <stdio.h>

int main (void){

    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d",&SizeArray);

    int Array[SizeArray];
    int num;

    int largest = 0;

    for (int i = 0; i<SizeArray; i++){

        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &num);

        Array[i] = num;

        if (Array[i] > largest){
            largest = Array[i];
        }

        
    }

    printf("The largest of the numbers in the array is: %d", largest);
}