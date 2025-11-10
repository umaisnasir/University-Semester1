// Create a program that uses a while loop to print numbers from 10 down to 1.

#include<stdio.h>

int main (void){

    int loop_counter = 9;
    

    while (loop_counter >= 1){
        printf("The number is: %d\n", loop_counter);
        loop_counter -= 2; 

    }

    return 0;
}