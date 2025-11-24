// fig05_02.c
// Finding the maximum of three integers.
#include <stdio.h>

int maximum(int x, int y); // function prototype

int main(void) {
   int number1 = 0; // first integer entered by the user
   int number2 = 0; // second integer entered by the user
   int number3 = 0; // third integer entered by the user
   int number4 = 0; // four integer entered by the user

   printf("Enter four integers: ");
   scanf("%d%d%d%d", &number1, &number2, &number3, &number4);
   
   // Comparison between number 1 and number 2 
   // Comparison between number 2 and number 3
   
   // Then, comparison between statement 1 and statement 2

   printf("Maximum is: %d\n", maximum(maximum(number1, number2),maximum(number3,number4)));
} 

// Function maximum definition
int maximum(int x, int y) {            
   int max = x; // assume x is largest        
                                              
   if (y > max) { // if y is larger than max, 
      max = y; // assign y to max             
   }                                                                                                
                                              
   return max; // max is largest value        
}                                             


