// Design a program to print a half diamond pattern of asterisks. The user provides the 
// number of rows for the pattern.

// #include <stdio.h>

// int main (void){

//     int index;
//     int Rows,Column;

//     printf("Enter the number of rows: ");
//     scanf("%d", &Rows);

// // 1st half

//     for (index = 1; index <= Rows; index++){  // runs from 1 till whatever user inputs

//         for (Column = 1; Column <= index; Column++){  // runs from 1 till outer-loop-count (for 1st iteration only)

//             printf("*");
//         }
//         printf("\n");
//     }

// // 2nd half

//     for (index = Rows - 1; index >= 1; index--) {  // Rows - 1 because: we will restart 1 - from where we left (backwards count)
//                                                    // Runs until 1
//                                                    // Decremental loop

//         for (Column = 1; Column <= index; Column++) {  // runs from 1 till inner-loop-count (for 1st iteration only)
//             printf("*");
//         }
//         printf("\n");
//     }

// }


// i = row
// j = col

#include <stdio.h>

int main() {
    int lineCount;
    int starCount;
    int increment = 1;
    int userInput;

    printf("Enter the number of rows: ");
    scanf("%d", &userInput);

    starCount = 1; 

    for (lineCount = 1; lineCount <= (2 * userInput - 1); lineCount++) {

        for (int rowCount = 1; rowCount <= starCount; rowCount++) {
            printf("*");
        }

        printf("\n");

        
        if (starCount == userInput) {
            increment = -1;
        }

        starCount = starCount + increment;
    }

    return 0;
}