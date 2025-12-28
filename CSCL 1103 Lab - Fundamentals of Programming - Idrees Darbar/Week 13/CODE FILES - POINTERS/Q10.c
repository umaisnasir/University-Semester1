// Write a program to swap value of two numbers using pointers in functions.

#include <stdio.h>

int main (void){

    int variable1;
    int variable2;

    int* pointer_var1;
    int* pointer_var2;

    pointer_var1 = &variable1;

    printf("Enter the first number: ");
    scanf("%d", pointer_var1);    // Store the integer input into the memory location that pointer_var1 points to.

    pointer_var2 = &variable2;

    printf("Enter the second number: ");
    scanf("%d", pointer_var2);    // Store the integer input into the memory location that pointer_var2 points to


    // Swapping
    *pointer_var1 = *pointer_var1 + *pointer_var2;
    *pointer_var2 = *pointer_var1 - *pointer_var2;
    *pointer_var1 = *pointer_var1 - *pointer_var2;
     
     
    
    printf("Variable 1 now has the value: %d\n",*pointer_var1 );
    printf("Variable 2 now has the value: %d\n",*pointer_var2 );

}