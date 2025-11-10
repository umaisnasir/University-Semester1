// The ages of Hamza, Ali and Basit are entered through keyboard, write a program to determine the youngest of three.

#include <stdio.h>

int main (void){

    int Hamza_Age, Ali_Age, Basit_Age;

    printf ("Enter the age of Hamza: ");
    scanf("%d", &Hamza_Age);

    printf ("Enter the age of Ali: ");
    scanf("%d", &Ali_Age);

    printf ("Enter the age of Basit: ");
    scanf("%d", &Basit_Age);

    if ((Hamza_Age < Ali_Age) && (Hamza_Age < Basit_Age)){
        printf("Hamza is the youngest.\n");
    }
    else if ((Ali_Age < Hamza_Age) && (Ali_Age < Basit_Age)){
        printf("Ali is the youngest.\n");
    }
    else if ((Basit_Age < Hamza_Age) && (Basit_Age < Ali_Age)){
        printf("Basit is the youngest.\n");
    }
    else{
        printf("Two poeple are of same age.\n");
    }

    return 0;




    
}