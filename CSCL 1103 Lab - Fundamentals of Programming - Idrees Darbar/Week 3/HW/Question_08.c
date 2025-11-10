//Write a program to reverse a four digit number

#include <stdio.h>

int main (void){

    int num, dig1, dig2, dig3, dig4;

    printf("Enter a 4 digit number: ");
    scanf("%d", &num);

    dig4=(num/1000)%10; // 4
    dig3=(num/100)%10; // 3
    dig2=(num/10)%10;  // 2
    dig1=num%10; // 1

// if 4321 is input

    int reversed = (dig1 * 1000) + (dig2 * 100) + (dig3 * 10) + dig4; 

    printf("The reversed number: %d\n", reversed);

    return 0;

}