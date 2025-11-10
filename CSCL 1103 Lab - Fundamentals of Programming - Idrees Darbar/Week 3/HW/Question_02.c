//Write a program to swap numbers. (Without using the temp variables. Use Arithmetic Operators)

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a is: %d\nThe value of b is: %d\n", a, b);

    return 0;
}