// fig05_01.c
// Creating and using a function.
#include <stdio.h> 

// Function Prototype (Declaration)
// This tells the compiler:
// 1. A function named 'square' exists.
// 2. It accepts one argument, which is an 'int'.
// 3. It will return a value, which is an 'int'.

int square(int number); 


int main(void) {

   for (int x = 1; x <= 10; ++x) {

      // The program jumps from the main function to the start of the square function's definition.
      // 'x' (the argument) is passed to the 'square' function
      // The returned result (the square of x) is then printed.

      printf("%d  ", square(x)); 
   } 

   puts("");
} 

// The 'return' statement sends the result of the calculation back to the place where the function was called.


int square(int number) { 
   return number * number;         
}