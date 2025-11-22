// Create a program that uses a for loop to print all odd numbers from 1 to 19.

#include<stdio.h>

int main (void){

    int loop_counter;
    

    for (loop_counter = 1; loop_counter <= 19; loop_counter += 2){
        printf("The number is: %d\n", loop_counter);

    }

    return 0;
}
