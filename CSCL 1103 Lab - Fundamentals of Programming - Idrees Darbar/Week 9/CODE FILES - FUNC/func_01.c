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

                                    // the program will jump from line 19 to line 7
    result = multiply(num1, num2);  // in result whatever is happening in line 8 will be stored.

    
    printf("Product = %d\n", result);

    return 0;
}