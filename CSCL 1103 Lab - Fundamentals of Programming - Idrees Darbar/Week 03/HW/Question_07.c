//Write a program to reverse the unit with hundred in a five digit number. (Take user input)

#include <stdio.h>

int main(void){

    int number, units, hundreds;

    printf("Enter a 5 digit number: ");
    scanf("%d",&number);

    units = number%10;
    hundreds = (number/100)%10;

    int Temp = units;
    units = hundreds;
    hundreds = Temp;

    printf("The Units are %d\n", units);
    printf("The Hundreds are %d\n", hundreds);

    return 0;

}
