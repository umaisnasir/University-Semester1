// Write a C program that uses nested loops to print a right-angled triangle pattern of 
// asterisks. The user should specify the number of rows for the triangle

#include <stdio.h>

int main (void){

    int User_input;
    int Rows,Column;

    printf("Enter the number of rows: ");
    scanf("%d", &User_input);

    for (Rows = 1; Rows <= User_input; Rows++){    // runs from 1 till whatever user inputs

        for (Column = 1; Column <= Rows; Column++){  // runs from 1 till outer-loop-count (for 1st iteration only)

            printf("*");
        }

        printf("\n");
    }
}

