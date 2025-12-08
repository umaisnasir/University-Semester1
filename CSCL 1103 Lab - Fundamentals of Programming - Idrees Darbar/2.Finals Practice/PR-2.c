// Write a C program that defines a function *multiply* which takes two integers as parameters and returns their product. 
// In the main function, take two integers as input, call the *multiply* function, and print the result


// #include <stdio.h>

// int multiply(int num1, int num2){

//     return num1 * num2;
// }

// int main (void){

//     int num1,num2;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     int result = multiply(num1, num2);

//     printf("The result is: %d", result);
// }

// ------------------------------------------------------------------------------

// Create a C program that defines a function power which takes two parameters, base and exponent, 
// and calculates the result of raising the base to the exponent. In the main function, 
// take values for base and exponent, call the power function, and print the result

// #include <stdio.h>

// int power(int base, int exponent){
    
//     int result = 1;

//     for (int i = 0; i < exponent; i++){
//         result = result * base;
//     }

//     return result;
// }

// int main (void){
    
//     int base, exponent;

//     printf("Enter the value for the base: ");
//     scanf("%d", &base);

//     printf("Enter the value for the exponent: ");
//     scanf("%d", &exponent);

//     int result = power(base, exponent);

//     printf("%d race to power %d is: %d", base, exponent, result);


// }

// Implement a recursive function Fibonacci that calculates the nth Fibonacci number. In the main function, 
// take an integer input (n) and print the nth Fibonacci number using the Fibonacci function.

// #include <stdio.h>

// int fibo(int num){

//     if (num == 0){
//         return 0;
//     }
//     if (num == 1){
//         return 1;
//     }

//     return fibo(num - 1) + fibo(num - 2);
// }

// int main (void){

//     int num;

//     printf("Enter a number whose fib sequence you want to print: ");
//     scanf("%d", &num);

//     int result = fibo(num);

//     printf("Fibonnaci (%d) is: %d", num, result);

//     for (int i = 0; i <= num; i++){
//         printf("\nThe series is: %d", fibo(i));
//     }

//     return 0;

// }

// Write a C program with a function findMax that finds and returns the maximum value in an array
// of integers. In the main function, take an array of integers as input, call the findMax function, and
// print the maximum value.


// #include <stdio.h>

// int findMax(int Array[], int ArraySize){

//     int max = 0;

//     for (int i = 0; i < ArraySize; i++){
//         if (Array[i] > max){
//             max = Array[i];
//         }

//     }

//     return max;
// }

// int main (void){
    
//     int ArraySize;

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize];

    
//     for (int i = 0; i < ArraySize; i++){
//         printf("Enter a value to insert in the array: ");
//         scanf("%d", &Array[i]);

//     }

//     int call = findMax(Array, ArraySize);

//     printf("The largest value is: %d", call);
// }


// Write a program that calculates the sum of elements in an array of integers.

// #include <stdio.h>

// int main (void){
    
//     int ArraySize;

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize];


//     int num;
//     int sum = 0;
//     for (int i = 0; i < ArraySize; i++){
//         printf("Enter a value to insert inside the array: ");
//         scanf("%d", &num);

//         Array[i] = num;
//         sum = sum + Array[i];

//     }

//     printf("The result is: %d", sum);
// }


// #include <stdio.h>

// int main (void){
    
//     int ArraySize;

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize];


//     int num;
//     int largest = 0;
//     for (int i = 0; i < ArraySize; i++){
//         printf("Enter a value to insert inside the array: ");
//         scanf("%d", &num);
//         Array[i] = num;

//         if (Array[i] > largest){
//             largest = Array[i];
//         }

//     }

//     printf("The result is: %d", largest);
// }



// #include <stdio.h>

// int main (void){
    
//     int ArraySize;

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize + 1];


//     int num;
    
//     for (int i = 0; i < ArraySize; i++){
//         printf("Enter a value to insert inside the array: ");
//         scanf("%d", &num);

//         Array[i] = num;
//     }

//     int newval;

//     printf("Enter a new value to append: ");
//     scanf("%d", &newval);

//     Array[ArraySize] = newval;
//     ArraySize++;

//     printf("\nArray contents after adding new value: ");
//     for (int i = 0; i < ArraySize; i++) {  // print with the updated length.
//         printf("%d ", Array[i]);
//     }

// }


// #include <stdio.h>

// int main (void){

//     int SizeArray;

//     printf("Enter the size of the ARRAY: ");
//     scanf("%d",&SizeArray);

//     int Array[SizeArray];

//     int num;

//     for (int i = 0; i<SizeArray; i++){

//         printf("Enter a number to store inside the ARRAY: ");
//         scanf("%d", &num);

//         Array[i] = num;
    
//     }

//     for (int i = 0; i < SizeArray / 2; i++){
        
//         int temp = Array[i];
//         Array[i] = Array[SizeArray - 1 - i];
//         Array[SizeArray - 1 - i] = temp;
//     }

//     printf("Contents of the Reversed array: ");
//     for (int i = 0; i < SizeArray; i++){
//         printf("%d ", Array[i]);
//     }

// }


// #include <stdio.h>

// int main (void){

//     int SizeArray;

//     printf("Enter the size of the ARRAY: ");
//     scanf("%d",&SizeArray);

//     int Array[SizeArray];
//     int num;

    

//     for (int i = 0; i<SizeArray; i++){

//         printf("Enter a number to store inside the ARRAY: ");
//         scanf("%d", &num);

//         Array[i] = num;
//     }

//     int user_inp;

//     printf("Enter the value you entered in the array to determine it's index position: ");
//     scanf("%d", &user_inp);

//     for (int i = 0; i < SizeArray; i++){
//         if (Array[i] == user_inp){
//             printf("The index position is: %d", i);
//         }
//     }
// }


// #include <stdio.h>

// int main (void){

//     int ArraySize = 5;

//     char Array[ArraySize];

//     for (int i = 0; i < ArraySize; i++){
//         Array[i] = '*';
//     }

//     for (int x = 0; x < ArraySize; x++){
//         for (int y = 0; y < ArraySize; y++){
//             printf("%c ", Array[y]);
//         }
//         printf("\n");
//     }
    
// }


// #include <stdio.h>

// int main (void){

//     int ArraySize = 15;

//     char Array[ArraySize];

//     for (int i = 0; i < ArraySize; i++){
//         Array[i] = '*';
//     }

//     for (int x = 0; x < ArraySize; x++){
//         for (int y = 0; y < x; y++){
//             printf("%c ", Array[y]);
//         }
//         printf("\n");
//     }
    
// }


// Write a program to find the address of two integer variables

// #include <stdio.h>

// int main (void){

//     int* pointer1;
//     int* pointer2;

//     int number1 = 10; 
//     int number2 = 15;

//     pointer1 = &number1;
//     pointer2 = &number2;

//     printf("\nThe address of %d is: %p", *pointer1, pointer1);
//     printf("\nThe address of %d is: %p", *pointer2, pointer2);
// }


// Write a program in C to add two numbers using pointers

// #include <stdio.h>

// int main (void){

//     int* pointer1;
//     int* pointer2;

//     int number1 = 10;
//     int number2 = 15;

//     pointer1 = &number1;
//     pointer2 = &number2;

//     printf("The sum is: %d", *pointer1 + *pointer2);



// }


// #include <stdio.h>

// int main (void){

//     int num1, num2, num3;

//     int *p, *q, *r;

//     p = &num1;
//     printf("Enter the first number: ");
//     scanf("%d", p);

//     q = &num2;
//     printf("Enter the second number: ");
//     scanf("%d", q);

//     r = &num3;
//     printf("Enter the third number: ");
//     scanf("%d", r);

//     if (*p > *q && *p > *r){
//         printf("The Largest number is: %d", *p);
//     }
//     else if (*q > *p && *q > *r){
//         printf("The Largest number is: %d", *q);
//     }
//     else if (*r > *p && *r > *q){
//         printf("The Largest number is: %d", *r);
//     }
//     else{
//         printf("Retry");
//     }

// }


// Write a program to swap value of two variables using pointer

// #include <stdio.h>

// int main (void){

//     int var1;
//     int var2;

//     int* ptr1;
//     int* ptr2;

//     ptr1 = &var1;
//     printf("Enter the first number: ");
//     scanf("%d", ptr1);

//     ptr2 = &var2;
//     printf("Enter the second number: ");
//     scanf("%d", ptr2);

//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;

//     printf("Variable 1 now has the value: %d\n",*ptr1 );
//     printf("Variable 2 now has the value: %d\n",*ptr2);



// }


// Write a program and show the memory address of 10 indexes, array data type was integer and
// shows the addresses of particular array on screen?

// VLA METHOD

// #include <stdio.h>

// int main (void){

//     int ArraySize;

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize];

//     int *pointer = Array;

//     for (int i = 0; i < ArraySize; i++){
//         *(pointer + i) = (i + 1) * 5;
//     }

//     for (int i = 0; i < ArraySize; i++){
//         printf("Index = %d, Value = %2d, Address = %p\n", i, *(pointer + i), (pointer + i));
//     }

// }

