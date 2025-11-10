// Design a program that generates a random number between 1 and 100. The user is 
// asked to guess the number. Use a do-while loop to continue prompting until the 
// correct number is guessed.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    
    int Generated_Num, User_Guess;

    srand(time(NULL));
    
    Generated_Num = rand() % 100 + 1;

    printf("\nENTER A NUMBER B/W 1 and 100");

    do {
        printf("\nEnter a number to guess: ");
        scanf("%d", &User_Guess);

        if (User_Guess > Generated_Num){
            printf("Too High, Try Again!\n");
        }
        else if (User_Guess < Generated_Num){
            printf("Too Low, Try Again!\n");
        }
        else{
            printf("You guessed it right!\n");
        }
    } while (Generated_Num != User_Guess);

    return 0;
}