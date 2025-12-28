#include <stdio.h>   

int main(void) {     
    int num, div = 2;   // num (to hold the current number), div (the divisor, initialized to 2)

    
    for (int n = 2; n <= 100; n++) {
        num = n;      // Set 'num' to the current value of 'n'
        div = 2;      // Reset divisor to 2 for each new number
        printf("%d : ", num);  

        // Factorize the number until it becomes 1
        while (num != 1) {
            if (num % div == 0) {  // If 'div' divides 'num' evenly (no remainder) - num is the user input
                num /= div;        // Divide 'num' by 'div' (reduce it)
                printf("%d ", div); // Print the divisor (a prime factor)
            } else {
                div++;             // Otherwise, try the next divisor
            }
        }  
        puts(""); 
    }

  
}
