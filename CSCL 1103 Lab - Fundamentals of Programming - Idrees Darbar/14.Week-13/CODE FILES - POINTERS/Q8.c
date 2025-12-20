// Write a program to find the sum of all the elements of an array using pointers.

#include <stdio.h>

int main (void){
    
    int Array[] = {10,23,33,44,53,56,64,35,44,34};

    int* ptr = Array;
    int sum = 0;

    for(int i = 0; i < 10; i++){

        sum = sum + *ptr;

        ptr++;
    }

    printf("The sum is: %d", sum);
}

