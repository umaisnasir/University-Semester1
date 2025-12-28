// Design a program that calculates the factorial of a number entered by the user using a for loop. The
// factorial of a number is the product of all positive integers from 1 to that number.


#include <stdio.h>

int main() {
    int user_input, i;
    int Factorial = 1;

    printf("Enter a number to calculate it's factorial: ");
    scanf("%d", &user_input);

    for (i=1; i<=user_input; i++){

        Factorial = Factorial * i;

    }

    printf("The factorial is: %d\n", Factorial);

    return 0;

}