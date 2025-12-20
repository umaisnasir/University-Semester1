// fig07_02.c
// BY VAL
#include <stdio.h>

int main(void) {

   int number = 5; // initialize number

   printf("The original value of number is %d", number);

   number = cubeByValue(number); // pass number by value to cubeByValue

   printf("\nThe new value of number is %d\n", number);

} 

// calculate and return cube of integer argument      

int cubeByValue(int n) {   

   return n * n * n; // cube local variable n and return result
}                                                              

// Pass by value gives the function a copy of the variable. 
// The original value in main() does not change unless you replace it with the returned result.