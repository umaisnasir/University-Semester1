// Write a program that calculates the sum of elements in an array of integers.

#include <stdio.h>

int main (void){

    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d",&SizeArray);

    int Array[SizeArray];
    int num;

    int sum = 0;

    for (int i = 0; i<SizeArray; i++){

        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &num);

        Array[i] = num;

        sum = sum + Array[i];
    }

    printf("The sum of the numbers in the array is: %d", sum);
}