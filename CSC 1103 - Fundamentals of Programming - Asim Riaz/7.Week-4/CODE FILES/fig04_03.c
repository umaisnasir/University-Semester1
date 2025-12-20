// This program calculates the sum of all even numbers from 2 to 100 (inclusive).
// fig04_03.c  

#include <stdio.h>

int main(void) {
   int sum = 0; // initialize sum

   for (int number = 2; number <= 100; number += 2) {    // number += 2 means -----> number = number + 2 [we want the sum of all the "EVEN" numbers]
      printf("%d ",number);
      sum += number; // add number to sum -------> sum = sum + number                      
   }

   printf("\nSum is %d\n", sum);    // sum happens when the for loop ends
}

