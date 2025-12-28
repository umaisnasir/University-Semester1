// Write a program in C to add two numbers using pointers

#include <stdio.h>

int main (void){

    int number1 = 10;
    int number2 = 15;

    int *pointer1 = &number1;
    int *pointer2 = &number2;

    // int addition = *ptr + *ptr2;

    // Passing the value itself...
    printf("The addition is: %d\n", *pointer1 + *pointer2);

}