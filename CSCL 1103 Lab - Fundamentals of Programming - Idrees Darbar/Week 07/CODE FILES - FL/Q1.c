// Write a C program that uses a for loop to print all even numbers from 2 to 20.

#include<stdio.h>

int main (void){

    int loop_counter;
    

    for (loop_counter = 2; loop_counter <= 10; loop_counter+=2){
        printf("The number is: %d\n", loop_counter);

    }

    return 0;
}

