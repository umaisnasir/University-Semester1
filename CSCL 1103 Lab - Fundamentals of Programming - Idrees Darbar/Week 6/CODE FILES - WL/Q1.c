// Write a C program that uses a while loop to print numbers from 1 to 10.

#include<stdio.h>

int main (void){

    int loop_counter = 1;
    

    while (loop_counter <= 10){
        printf("The number is: %d\n", loop_counter);
        loop_counter += 1;

    }

    return 0;
}