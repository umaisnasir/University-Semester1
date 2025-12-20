// Create a program that uses a while loop to print all odd numbers from 1 to 19.

#include<stdio.h>

int main (void){

    int loop_counter = 1;
    

    while (loop_counter <= 20){
        printf("The number is: %d\n", loop_counter);
        loop_counter += 2;

    }

    return 0;
}