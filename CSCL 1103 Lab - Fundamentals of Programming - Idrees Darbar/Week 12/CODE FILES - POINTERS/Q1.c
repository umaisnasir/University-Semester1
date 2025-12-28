// Write a program to find the address of two integer variables

#include <stdio.h>

int main (void){

    int *pointer1;
    int *pointer2;
     
    // Numbers hard-coded
    int number1 = 10;
    int number2 = 15;

    // passing addresses
    pointer1 = &number1;
    pointer2 = &number2;

    // printing using %p - memory allocation
    printf("Address of Number 1: %p\n", pointer1);
    printf("Address of Number 2: %p\n", pointer2);

}