// Design a program that calculates the factorial of a number entered by the user using a while loop.
// The factorial of a number is the product of all positive integers from 1 to that number.

#include<stdio.h>

int main (void){

    int user_input;
    int factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // loop_counter = user_input;

    while (user_input >= 1){
        factorial = factorial * user_input;
        user_input -= 1;
    }
    printf("The number is: %d\n", factorial);

    return 0;
}