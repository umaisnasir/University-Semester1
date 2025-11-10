// A number is taken as an input from the user. Write a C-Program to determine if it's an ODD or an EVEN number.

#include <stdio.h>

int main (void){

    int User_Input;

    printf("Enter a number: ");
    scanf("%d", &User_Input);

    if (User_Input % 2 == 0){
        printf("This is a EVEN number.\n");
    }
    else{
        printf("This is a ODD number.\n");
    }

    return 0;


}