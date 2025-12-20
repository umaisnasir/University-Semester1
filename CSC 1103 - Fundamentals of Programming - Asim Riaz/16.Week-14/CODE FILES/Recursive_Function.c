// Recursive factorial function.
#include <stdio.h>

unsigned long long int factorial(int number) { 
   if (number <= 1) { // base case (if number is 0 or 1 return 1)
      return 1;
   }
   else { 
      return (number * factorial(number - 1)); 
   }
}

int main(void) {

   for (int i = 0; i <= 10; ++i) {
      printf("%d! = %llu\n", i, factorial(i));
   }
}


// i = 0
// factorial(0) → base case → return 1
// printf prints: 0! = 1

// i = 1
// factorial(1) → base case → return 1
// printf prints: 1! = 1

// i = 2
// factorial(2)
//  → 2 * factorial(1)
//  → 2 * 1
//  → return 2
// printf prints: 2! = 2

// i = 3
// factorial(3)
//  → 3 * factorial(2)
//  → 3 * (2 * factorial(1))
//  → 3 * (2 * 1)
//  → return 6
// printf prints: 3! = 6

// i = 4
// factorial(4)
//  → 4 * factorial(3)
//  → return 24
// printf prints: 4! = 24

// i = 5
// factorial(5)
//  → 5 * factorial(4)
//  → return 120
// printf prints: 5! = 120

// i = 6
// factorial(6)
//  → 6 * factorial(5)
//  → return 720
// printf prints: 6! = 720

// i = 7
// factorial(7)
//  → 7 * factorial(6)
//  → return 5040
// printf prints: 7! = 5040

// i = 8
// factorial(8)
//  → 8 * factorial(7)
//  → return 40320
// printf prints: 8! = 40320

// i = 9
// factorial(9)
//  → 9 * factorial(8)
//  → return 362880
// printf prints: 9! = 362880

// i = 10
// factorial(10)
//  → 10 * factorial(9)
//  → return 3628800
// printf prints: 10! = 3628800