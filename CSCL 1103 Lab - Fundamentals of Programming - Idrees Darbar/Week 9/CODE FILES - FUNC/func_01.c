// Write a C program that defines a function *multiply* which takes two integers as parameters and returns their product. 
// In the main function, take two integers as input, call the *multiply* function, and print the result

#include <stdio.h>


int multiply(int a, int b) {
    return a * b;
}


int main() {
    int num1, num2, result;

    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

                                    // the program will jump from this line to wherever the function is defined
    result = multiply(num1, num2);  // in result whatever is happening in the function defination line will be stored.

    
    printf("Product = %d\n", result);

    return 0;
}