#include <stdio.h>

int main(void) {
    int row = 10;    // 10 rows will be printed

    while (row >= 1) {  // while loop ends when row hits 1, row has 10 rn
        int column = 1;  // column has value 1 for the first iteration

        while (column <= 10) {  // column has 10 figures
            printf("%s", (row % 2) ? "<" : ">");  // if the row count is even , print "<", esle print ">"
            
            // if (row % 2) {
                //  printf("<");
           // } else {
                // printf(">"); // 

            ++column;  // inside the column while loop increment, cuz we have to move to second, third, fourth ">" sign
        }

        --row; // decrement the row until row = 1
        puts("");
    }

    return 0;
}




