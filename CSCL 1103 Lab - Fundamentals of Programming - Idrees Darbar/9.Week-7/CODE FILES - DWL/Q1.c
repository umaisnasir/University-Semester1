// Write a C program that uses a do-while loop to prompt the user to enter a positive 
// number. Keep prompting until a valid positive number is entered.

#include <stdio.h>

int main (void){

    int user_prompt;

    do{
        printf("Enter a positive number: ");
        scanf("%d", &user_prompt);



    } while (user_prompt >= 0);

return 0;
}
