// Write a C-Program to check if the first number is greater than the second number

#include <stdio.h>

int main (void){

    int First_Num, Second_Num;

    printf("Enter the first number: ");
    scanf("%d", &First_Num);

    printf("Enter the second number: ");
    scanf("%d", &Second_Num);


    if (First_Num > Second_Num){
        printf("First number is greater!");
    }
    else if (Second_Num > First_Num){
        printf("Second number is greater!");
    }
    else{
        printf("RETRY!!!");
    }

    return 0;
}
