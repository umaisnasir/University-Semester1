// Write a program that will print the following pattern:
// 1******
// 12*****
// 123****
// 1234***
// 12345**
// 123456*
// 1234567

#include <stdio.h>

int main(void) {
    int Rows = 7;  // total number of rows
    int i, j;

    for (i = 1; i <= Rows; i++) {  // Outer loop runs from 1 to 7
        
        for (j = 1; j <= i; j++) {  // When the outer loop runs 1 time, the inner loop runs from 1 till outer-loop-count (for 1st iteration only)
            printf("%d", j);  // print the loop count
        }

        
        for (j = i; j < Rows; j++) {  // this loop starts from the count from where the last loop left so that relevant number of * are printed.
                                      // runs until Rows (i.e 7)
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
