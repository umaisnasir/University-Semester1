// Program to raise x to the power y
#include <stdio.h>

int main(void) {
    int x = 0;      // base number
    int y = 0;      // exponent
    int i = 1;      // loop counter
    int power = 1;  // result of x raised to y

    // Get input from the user
    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (y): ");
    scanf("%d", &y);

    // Calculate x^y using a while loop
    while (i <= y) {
        power *= x;  // multiply power by x
        i++;         // increment counter
    }

    // Display the result
    printf("%d raised to the power %d is %d\n", x, y, power);

    return 0; // indicate successful program termination
}
