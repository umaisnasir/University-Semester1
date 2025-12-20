// Write a C program to generate the multiplication table for a number entered by the user using a for
// loop. For example, if the user enters 5, the program should print the multiplication table for 5 up to
// a specified range.

#include <stdio.h>

int main() {
    int user_input, index;

    printf("Enter a number to generate its multiplication table: ");
    scanf("%d", &user_input);


    for (index = 1; index <= 10; index++) {
        printf("%2d x %2d = %3d\n", user_input, index, user_input * index);    // Each %d links to a variable after the first comma.
    }

    return 0;
}
