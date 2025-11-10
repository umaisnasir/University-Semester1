#include <stdio.h>

int main() {
    int count, asterisk, space = 1;

    for (count = 1; count <= 10; count++) {

        for (asterisk = 1; asterisk <= 10; asterisk++) {
            
            // Simple if-else version
            if (space > asterisk) {
                printf(" ");  // print space
            } else {
                printf("*");  // print star
            }
        }

        space++;  // increase number of spaces for next line
        printf("\n");  // move to next line
    }

    return 0;
}
// printf(spc >= a ? "-" : "*")

// in the first iteration 10 stars are being printed because space is comapred
// with asterisk for 10 times and each time the same for loop runs and 
// prints stars on one line because the condition remains false.


// in the fifth iteration, the value of space is 5 and the value of asterisk
// is 1 cuz the for loops starts again after previous 10 iterations.
// first inner loop iteration would be is 5>1, second would be 5>2, so in 
// this way four " " would be printed and after that stars would be printed.

