// Create a C program that defines a function power which takes two parameters, base and exponent, 
// and calculates the result of raising the base to the exponent. In the main function, 
// take values for base and exponent, call the power function, and print the result


#include <stdio.h>

int power(int base, int exponent) {
    int result = 1;

    for(int i = 0; i < exponent; i++) {    // race-to-power logic.
        result = result * base;  
    }

    return result;
}

int main() {
    int base, exponent;

    
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    
    int result = power(base, exponent);    // Calling the power function and printing the result.
                                           // The line 29 will jump to the function defination above.
    printf("%d raised to %d is: %d\n", base, exponent, result);    // base will remain constant even after the mathematical operation has been performed.

    return 0;
}
