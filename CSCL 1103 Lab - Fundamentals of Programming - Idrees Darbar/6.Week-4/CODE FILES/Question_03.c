// Write a C-Program to check whether the year entered is a lap year or not.

#include <stdio.h>

int main (void){

    int Leap_Year_Input;

    printf("Enter a year to check if it's a leap year or not: ");
    scanf("%d", &Leap_Year_Input);

    if ((Leap_Year_Input % 400 == 0) || (Leap_Year_Input % 4 == 0 && Leap_Year_Input % 100 != 0)){ // 1600, 2000, 2400 (these are leap years) 
                                                                                                   // Leap year arrives after every 4 years AND the year shouldn't be
                                                                                                   // divisble 100 leaving a remainder of 0
        
        
        printf("The year entered is a leap year!");
    }
    else{
        printf("The year entered is not a leap year!");
    }

    return 0;

}