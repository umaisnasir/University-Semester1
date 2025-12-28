// Write a program that determines if a person is eligible for insurance based on the following rules:

// 1. A person is considered insured if any of the following conditions are true:

// 2. The driver is married.

// 3. The driver is unmarried, male, and above the age of 30.

// 4. The driver is unmarried, female, and above the age of 25.

#include <stdio.h>

int main (void){

    char Gender,Marital_Status;
    int Driver_Age;

    printf("Input your marital status (y/n): ");
    scanf ("%c", &Marital_Status);

    printf("Input your gender (m/f): ");
    scanf (" %c", &Gender);

    printf("Input your Age: ");
    scanf ("%d", &Driver_Age);

    if ((Marital_Status == 'y') || (Marital_Status == 'Y')) {
        printf("You are insured!");
    }
    else if ((Marital_Status == 'n') || (Marital_Status == 'N')){
        
        if (((Gender == 'm') || (Gender == 'M')) && (Driver_Age > 30)){
            printf("You are insured!");
        }
        else if (((Gender == 'f') || (Gender == 'F')) && (Driver_Age > 25)){
            printf("You are insured!");
        }
        else{
            printf("You are not insured!");
        }   
    }
    else{
        printf("Invalid marital status input.");
    }

    return 0;
}