//Write a program to interchange values of two operands a and b

#include <stdio.h>

int main(void) {

    int value1,value2;

    printf("Enter the value of first digit: ");
    scanf("%d", &value1);

    printf("Enter the value of second digit: ");
    scanf("%d", &value2);

    int Temp = value1;
    value1 = value2;
    value2 = Temp;

    printf("The value of the first digit is: %d\n", value1);
    printf("The value of the second digit is: %d\n", value2);

    return 0;
 
}
