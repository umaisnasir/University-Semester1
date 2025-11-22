// Write a program that takes a number as input and uses a do-while loop to reverse 
// and print the digits of that number. For example, if the input is 12345, the program 
// should print 54321


#include <stdio.h>

int main (void){

    int User_input;
    int units, tens, hundreds,thousands,tenthousands;
    int Reversed;

    printf("Enter a number to reverse: ");
    scanf("%d", &User_input);

    do{
        units = User_input % 10;
        tens = (User_input / 10) % 10;
        hundreds = (User_input / 100) % 10;
        thousands = (User_input / 1000) % 10;
        tenthousands = (User_input / 10000) % 10;

        Reversed = (units * 10000 + tens * 1000 + hundreds * 100 + thousands * 10 + tenthousands);

        printf("The reversed number is: %d\n", Reversed);

    } while (User_input < 1);  // we have to run this loop only once 

    return 0;
}