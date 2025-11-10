#include<stdio.h>

int main(){
    int count, asterisk;

    // Outer loop - controls how many times does the inner loop runs.
    for(count=1; count <= 10; count++){

    // if count = 3 the inner loop runs 3 times on hte same line.

    // Since count equals 3, the inner loop executes with 
    // asterisk = 1, 2, and 3, printing one * each time on the same line.

        for(asterisk = 1; asterisk <= count; asterisk++){
            // 
            printf("*");
        }
        printf("\n");
    }

    return 0;
}