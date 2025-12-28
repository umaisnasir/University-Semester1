// Write a program to find the smallest number in an array using pointers.

#include <stdio.h>

int main (void){
    
    int Array[10] = {33,23,33,44,53,10,64,35,44,34};

    int* ptr = Array;
    int min = *ptr;

    for(int i = 0; i < 10; i++){

        if (*ptr < min){
            min = *ptr;
        }

        ptr++;

    }

    printf("The smallest is: %d", min);
}