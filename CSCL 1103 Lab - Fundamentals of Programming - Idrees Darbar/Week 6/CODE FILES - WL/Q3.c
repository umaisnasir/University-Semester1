// Write a C program that uses a while loop to print all even numbers from 2 to 20.

#include<stdio.h>

int main (void){

    int loop_counter = 2;
    

    while (loop_counter <= 20){
        printf("The number is: %d\n", loop_counter);
        loop_counter += 2;

    }

    return 0;
}