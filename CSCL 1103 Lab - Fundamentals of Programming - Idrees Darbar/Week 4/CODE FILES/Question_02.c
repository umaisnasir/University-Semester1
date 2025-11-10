// Write a C-Program to check whether a number entered by the user is zero or not.

#include <stdio.h>

int main (void){

    int User_Input;

    printf("Enter a number: ");
    scanf("%d", &User_Input);

    if (User_Input == 0){
        printf("The number you entered is 0!");
    }
    else{
        printf("The number tou entered is not zero");
    }

    return 0;
}