// fig05_02.c
// Finding the maximum of three integers.
#include <stdio.h>

int maximum(int x, int y, int z, int i); // function prototype

int main(void) {
   int number1 = 0; // first integer entered by the user
   int number2 = 0; // second integer entered by the user
   int number3 = 0; // third integer entered by the user
   int number4 = 0; // four integer entered by the user

   printf("%s", "Enter three integers: ");
   scanf("%d%d%d%d", &number1, &number2, &number3, &number4);
   
   // number1, number2 and number3 are arguments 
   // to the maximum function call
   printf("Maximum is: %d\n", maximum(number1, number2, number3, number4));
} 

// Function maximum definition
int maximum(int x, int y, int z, int i) {            
   int max = x; // assume x is largest        
                                              
   if (y > max) { // if y is larger than max, 
      max = y; // assign y to max             
   }                                                                                
   if (z > max) { // if z is larger than max, 
      max = z; // assign z to max             
   }
   if (i > max){ // if i is larger than max,
      max = i; // assign i to max
   }                                          
                                              
   return max; // max is largest value        
}                                             