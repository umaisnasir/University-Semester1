// fig07_03.c
// BY REF

#include <stdio.h>


int main(void) {

   int number = 5; // initialize number

   printf("The original value of number is %d", number);

   cubeByReference(&number); // pass address of number to cubeByReference

   printf("\nThe new value of number is %d\n", number);
} 


void cubeByReference(int *nPtr) {  // address defrefrenced - value will come!

   *nPtr = (*nPtr)  *  (*nPtr)  *  (*nPtr); // cube *nPtr

}


// Pass by reference gives the function the memory address of the variable. 
// The function works with the original variable itself, 
// so any change inside the function directly modifies the original value.