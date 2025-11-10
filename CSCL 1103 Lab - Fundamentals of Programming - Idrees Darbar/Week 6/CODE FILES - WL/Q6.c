// Write a program that takes a number as input and uses a while loop to reverse and print the digits
// of that number. For example, if the input is 12345, the program should print 54321

#include <stdio.h>

int main(void){
    
    int user_input, Remainder;
    int Reversed = 0;
    
    printf("Enter a number: ");
    scanf("%d", &user_input);

    while (user_input != 0){

        Remainder = user_input % 10;    // if input is 12345, this operation assigns 54321 to Remainder. Iteration by Iteration.

        Reversed = Reversed * 10 + Remainder;    // Build the reversed number.

        user_input = user_input / 10;    // Remove the last digit.

    }

    printf("Reversed number: %d\n", Reversed);

    return 0;

}

// 1st IT - user_input = 12345                         2nd IT                                     3rd IT
 
// Remainder = 5                                       Remainder = 4                             Remainder = 3
// Reversed = 0 * 10 + 5 = 5                           Reversed = 5 * 10 + 4 = 54                Reversed = 54 * 10 + 3 = 543
// user_input = 4                                      user_input = 3                            user_input = 2