#include <stdio.h>

int main() {
    for (int i = 5; i <= 9; i++) {    // outer loop runs from 5 to 9

        for (int j = 0; j < i; j++) {    

            printf("*");
        }
        printf("\n");
    }


// outer loop                            
// first iteration            second iteration                  second iteration  
// i = 5                      i = 6                             i = 6
// j = 0,1,2,3,4(5 stars)     j = 0,1,2,3,4,5(6 starts)         j = 0,1,2,3,4,5,69(7 stars) ...... runs until 9 stars


 for (int i = 8; i >= 5; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

// outer loop                            
// first iteration                  second iteration                  second iteration  
// i = 8                            i = 7                               i = 6
// j = 0,1,2,3,4,5,6,7(8 stars)     j = 0,1,2,3,4,5,6(7 starts)         j = 0,1,2,3,4,5,(6 stars) ... runs until 5 stars

    return 0;
}