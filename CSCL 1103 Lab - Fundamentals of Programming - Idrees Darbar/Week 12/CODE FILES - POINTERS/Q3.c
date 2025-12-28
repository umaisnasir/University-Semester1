// Write a program to find biggest among three numbers using pointer.

#include <stdio.h>

int main (void){

    int num1,num2,num3;
    int *p,*q,*r;

    p = &num1;  // p has the address of num1
    
    printf("Enter the first number: ");
    scanf("%d", p);    // scanf stores that number into the place p points to (i.e.num1)

    q = &num2;  // q has the address of num1

    printf("Enter the second number: ");
    scanf("%d", q);    // scanf stores that number into the place q points to (i.e.num2)

    r = &num3;  // r has the address of num1

    printf("Enter the third number: ");
    scanf("%d", r);    // scanf stores that number into the place r points to (i.e.num3)


    if (*p > *q && *p > *r){
        printf("The Largest number is: %d", *p);
    }
    else if(*q > *p && *q > *r){
        printf("The Largest number is: %d", *q);
    }
    else if(*r > *p && *r > *q){
        printf("The Largest number is: %d", *r);
    }
    else{
        printf("Try again!");
    }

}
