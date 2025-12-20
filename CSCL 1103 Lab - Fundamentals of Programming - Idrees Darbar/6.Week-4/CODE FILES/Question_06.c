// Write a program to print "You can Vote!" if voter age is 18 or above, otherwise print "You are not eligible."

#include <stdio.h>

int main (void){

    int User_Age;

    printf("Enter your age to check if you're eligible to vote: ");
    scanf("%d", &User_Age);

    if (User_Age >= 18){
        printf("You are eligible to vote.");
    }
    else{
        printf("You are not eligible to vote.");
    }
}