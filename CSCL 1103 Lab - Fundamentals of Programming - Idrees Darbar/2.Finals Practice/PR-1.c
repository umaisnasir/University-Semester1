// Write a program to find the address of two integer variables

// #include <stdio.h>

// int main (void){
//     int* ptr1;
//     int* ptr2;

//     int num1 = 10;
//     int num2 = 15;

//     ptr1 = &num1;
//     ptr2 = &num2;

//     printf("the address of num1 is: %p", ptr1);
//     printf("the address of num2 is: %p", ptr2);
// }

// Write a program in C to add two numbers using pointers

// #include <stdio.h>

// int main (void){
//     int number1 = 5;
//     int number2 = 10;

//     int *pointer1 = &number1;
//     int *pointer2 = &number2;

//     printf("The addition is: %d\n", *pointer1 + *pointer2);

// }


// Write a program to find biggest among three numbers using pointer.

// #include <stdio.h>

// int main (void){

//     int *p, *q, *r;
//     int num1, num2, num3;

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
//         printf("The largest number is: %d", *p);
//     }
//     else if (*q > *p && *q > *r){
//         printf("The largest number is: %d", *q);
//     }
//     else if (*r > *p && *r > *q){
//         printf("The largest number is: %d", *r);
//     }
//     else{
//         printf("Try again!");
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

//     int temp;

//     temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;

//     printf("Variable 1 now has the value: %d\n",*ptr1 );
//     printf("Variable 2 now has the value: %d\n",*ptr2 );


// }

// Write a program and show the memory address of 10 indexes, array data type was integer and
// shows the addresses of particular array on screen?

// Normal Method

// #include <stdio.h>

// int main (void){

//     int Array[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};

//     int *ptr = Array;

//     for (int i = 0; i < 10; i++){
//         printf("Index %d ----> Value: %d, Address : %p\n", i, *ptr, ptr);
//         ptr++;
//     }

//     return 0;
// }

// Write a program and show the memory address of 10 indexes, array data type was integer and
// shows the addresses of particular array on screen?

// VLA Method

// #include <stdio.h>

// int main (void){

//     int ArraySize;
//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize];

//     int *ptr = Array;

//     for (int i = 0; i < ArraySize; i++){
//         *(ptr + i) = (i + 1) * 5;
//     }

//     for (int i = 0; i < ArraySize; i++){
//         printf("Index %d -> Value: %d, Address: %p\n", i, *(ptr + i), (ptr + i));
//     }

//     return 0;
// }


// #include <stdio.h>

// int main (void){
    
//     int SizeArray;

//     printf("Enter the size of the Array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray + 1];

//     int insert;

//     for (int i = 0; i < SizeArray; i++){

//         printf("Enter the number to inset: ");
//         scanf("%d", &insert);

//         Array[i] = insert;
//     }

//     int new_val;

//     printf("Enter a new value: ");
//     scanf("%d", &new_val);

//     Array[SizeArray] = new_val;
//     SizeArray++;

//     for (int i = 0; i < SizeArray; i++){
//         printf("%d ", Array[i]);
//     }

//     printf("\n");
// }


// #include <stdio.h>

// int main(void){

//     int SizeArray;

//     printf("Enter the size of the array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];

//     int num;

//     for (int i = 0; i < SizeArray; i++){

//         printf("Enter the number to store inside the array: ");
//         scanf ("%d", &num);

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


// #include <Stdio.h>

// int main (void){
    
//     int ArraySize = 5;
//     char Array[ArraySize];

//     for (int i = 0; i < ArraySize; i++){
//         Array[i] = '*';
//     }

//     for (int i = 0; i < ArraySize; i++){
//         for (int j = 0; j < ArraySize; j++){
//             printf("%c ", Array[j]);
//         }
//         printf("\n");
//     }
// }

// #include <Stdio.h>

// int main (void){
    
//     int ArraySize = 10;
//     char Array[ArraySize];

//     for (int i = 0; i < ArraySize; i++){
//         Array[i] = '*';
//     }

//     for (int i = 0; i < ArraySize; i++){
//         for (int j = 0; j < i; j++){
//             printf("%c ", Array[j]);
//         }
//         printf("\n");
//     }
// }


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

//     printf("Enter base: ");
//     scanf("%d", &base);

//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);

//     int result = power(base, exponent);

//     printf("%d race to the power %d is %d\n", base, exponent, result);

//     return 0;
// }


// #include <stdio.h>

// int fib(int num){
    
//     if (num == 0){
//         return 0;
        
//     }
//     if (num == 1){
//         return 1;
//     }

//     return fib(num - 1) + fib(num - 2);
// }

// int main (void){
//     int num;

//     printf("Enter the number: ");
//     scanf("%d", &num);

//     printf("Fibonacci(%d) = %d\n", num, fib(num));

//     for (int i = 0; i <= num; i++){
//         printf("The series is: %d\n", fib(i));
//     }

//     return 0;
// }

// #include <stdio.h>

// int findmax(int Array[], int SizeArray){
//     int max;

//     max = 0;

//     for (int i = 0; i < SizeArray; i++){
//         if (Array[i] > max){
//             max  = Array[i];
//         }
//     }

//     return max;
// }

// int main (void){

//     int SizeArray;

//     printf("Enter the size of the Array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];

//     for (int i = 0; i < SizeArray; i++){
//         printf("Enter a number: ");
//         scanf("%d", &Array[i]);
//     }

//     int retval = findmax(Array, SizeArray);

//     printf("The maximum value is: %d\n", retval);

//     retval;
// }
