// #include <stdio.h>

// int fibonacci(int num){

//     if (num == 0){
//         return 0;
//     }
//     if (num == 1){
//         return 1;
//     }

//     return fibonacci(num - 1) + fibonacci(num - 2);
// }



// int main (){

//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Fibonacci (%d) = %d\n", num, fibonacci(num));

//     for (int i = 0; i <= num; i++){

//         printf("The series is: %d\n", fibonacci(i));
//     }

//     return 0;
// }



// #include <stdio.h>

// int findMax(int SizeArray, int Array[]){

//     int maxval = Array[0];

//     for (int i = 0; i < SizeArray; i++){

//         if (Array[i] > maxval){
//             maxval = Array[i];
//         }
//     }

//     return maxval;
// }

// int main (){

//     int SizeArray;

//     printf("Enter the size of the Array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];

//     for (int i = 0; i < SizeArray; i++){
//         printf("Enter any number to place it in the array: ");
//         scanf("%d", &Array[i]);


//     }

//     int RetVal = findMax(SizeArray, Array);
//     printf("The maximum value is: %d\n", RetVal);

//     return 0;
// }



// #include<stdio.h>

// int multiply(int a, int b){
//     return a * b;
// }

// int main (void){
    
//     int num1;
//     int num2;

//     printf("Enter a the first number: ");
//     scanf("%d", &num1);

//     printf("Enter a the second number: ");
//     scanf("%d", &num2);

//     int result = multiply(num1, num2);

//     printf("The result is: %d", &result);
// }


// #include <stdio.h>

// int power(int base, int exponent){

//     int result = 1;

//     for (int i = 0; i < exponent; i++){

//         result = result * base;
        
//     }

//     return result;
// }

// int main (){

//     int exp, base;

//     printf("Enter the base: ");
//     scanf("%d", &base);

//     printf("Enter the exponent: ");
//     scanf("%d", &exp);

//     int result = power(base, exp);

//     printf("%d raise to the power %d is: %d", base, exp, result);
// }


// #include <stdio.h>

// int fib(int n){

//     if (n == 0){
//         return 0;
//     }
//     if (n == 1){
//         return 1;
//     }

//     return fib(n - 1) + fib(n-2);


// }

// int main (){

//     int n;

//     printf("Enter the nth term: ");
//     scanf("%d", &n);

//     printf("fibonacci (%d) is: %d", n, fib(n));

//     for (int i = 0; i <= n; i++){
//         printf("\nThe series is: %d", fib(i));
//     }

// }


// Write a C program with a function findMax that finds and returns the maximum value in an array
// of integers. In the main function, take an array of integers as input, call the findMax function, and
// print the maximum value.


// #include <stdio.h>

// int findMax(int Array[], int ArraySize){

//     int max = Array[0];

//     for (int i = 1; i < ArraySize; i++){
//         if (Array[i] > max){
//             max = Array[i];
//         }

        
//     }

//     return max;

// }

// int main (){

//     int ArraySize;

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize];

//     int num;

//     for (int i = 0; i < ArraySize; i++){
//         printf("Enter contents: ");
//         scanf("%d", &num);

//         Array[i] = num;
//     }

//     int RetVal = findMax(Array, ArraySize);

//     printf("The largest value is: %d", RetVal);


// }