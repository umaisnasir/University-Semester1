// fig05_02.c
// Finding the maximum of three integers.
#include <stdio.h>

int maximum(int x, int y); // function prototype

int main(void) {
   int number1 = 0; // first integer entered by the user
   int number2 = 0; // second integer entered by the user
   int number3 = 0; // third integer entered by the user
   int number4 = 0; // third integer entered by the user

   printf("Enter any integers: ");
   scanf("%d", &number1);
   printf("Enter any integers: ");
   scanf("%d", &number2);
   printf("Enter any integers: ");
   scanf("%d", &number3);
   printf("Enter any integers: ");
   scanf("%d", &number4);
   
// same statement as the previous code, but the writing style is different.   

   printf("Maximum is: %d\n",
      maximum(
         maximum(number1, number2),
         maximum(number3, number4)
      )
   );
} 

// Function maximum definition
int maximum(int x, int y) {            
   int max = x; // assume x is largest        
                                              
   if (y > max) { // if y is larger than max, 
      max = y; // assign y to max             
   }                                          
                                            
   return max; // max is largest value        
}