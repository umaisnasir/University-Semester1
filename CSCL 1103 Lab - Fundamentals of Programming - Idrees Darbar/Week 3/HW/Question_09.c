//If a four-digit number is input through the keyboard, write a program to obtain the sum of the first
//and last digit of this number.

#include <stdio.h>

int main (void){

    int num,num1,num2,num3,num4;

    printf("Enter a 4 digit number: ");
    scanf("%d", &num);

    num4=(num/1000)%10; // 4
    num3=(num/100)%10; // 3
    num2=(num/10)%10; // 2
    num1=num%10; //1

// // if 4321 is input    

    int addition = num1 + num4;

    printf("The result is: %d\n", addition);

}
