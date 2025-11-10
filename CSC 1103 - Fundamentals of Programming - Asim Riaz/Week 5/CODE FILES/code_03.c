#include<stdio.h>

int main(){
    int count, ast;

    // Outer loop - controls how many times does the inner loop runs.
    for(count=10; count >= 1; count--){    // decrement

    // if count = 9 the inner loop runs 9 times on hte same line.

    // Since count equals 9, the inner loop executes with 
    // asterisk = 1,2,3,4,5,6,7,8,9 printing one * each time on the same line.        
        
        for(ast = 1; ast <= count; ast++){    // this is in ++ because the line
                                              // always increments
            printf("*");                         
        }
        printf("\n");
    }

    return 0;
}