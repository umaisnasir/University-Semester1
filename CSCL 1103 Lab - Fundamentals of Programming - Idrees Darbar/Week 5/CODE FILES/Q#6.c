// Write a C-Program to perform simple arithimetic operarions by using switch-case.

#include <stdio.h>

int main(void) {
    int num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the Operator: ");
    scanf(" %c", &operator);  

    switch (operator) {    // user inputs a specific operator to perform the operation
                           // operation happens inside case-statement and takes input before the switch-statements
        case '+':
            result = num1 + num2;
            printf("Sum is: %d\n", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Division is: %d\n", result);
            break;
        case '%':
            result = num1 % num2;
            printf("Remainder is: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Subtraction is: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Multiplication is: %d\n", result);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
