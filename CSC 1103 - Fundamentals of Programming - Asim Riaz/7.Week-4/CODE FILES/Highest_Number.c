// Enter three numbers, print the highest.

#include <stdio.h>

int main(void) {
    int user_input;
    int highest = 0;    // dummy value (must for initial comparsion)
    int counter;

    for (counter = 1; counter <= 3; ++counter) {
        printf("Enter a number: ");    // Print will happen 3 times, since it's in a for loop.
        scanf("%d", &user_input);

        if (user_input > highest) {    // checks for all three inputs
            highest = user_input;
        }
    }

    printf("The highest number is: %d\n", highest);    // prints OOL so that all three values have been checked earlier.

    return 0;
}
