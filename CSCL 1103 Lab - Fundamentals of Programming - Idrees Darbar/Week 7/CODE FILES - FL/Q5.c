// Write a program to generate the Fibonacci sequence up to a specified number of terms using a for
// loop. Allow the user to choose the number of terms to generate.

#include<stdio.h>

int main (void){

    int user_input, index;
    int var1 = 0, var2 = 1;    // first and second integer will always be zero
    int New_Var;    

    printf("Enter the number of terms: ");
    scanf("%d", &user_input);

    for (index = 1 ; index <= user_input; index++){

        printf("%d ", var1);

        New_Var = var1 + var2;    // Assign the sum of first two numbers in a variable.
        var1 = var2;    // Assign the second number to the first number(first variable).
        var2 = New_Var;    // Assign the result of addition to the second number (second variable).
    }
    return 0;
}

