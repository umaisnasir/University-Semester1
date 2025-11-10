#include <stdio.h> 

// Function Prototype (Declaration)
// This tells the compiler:
// 1. A function named 'add' exists.
// 2. It accepts two arguments, which are 'int'.
// 3. It will return a value, which is an 'int'.


int add(int num1, int num2);  

int main(void) {
    int count = 10;

    // The program jumps from the main function to the start of the add function's definition.
    // '1' and '2' (the arguments) are passed to the 'add' function.
    // The returned result (the sum of 1 and 2) is then printed.

    printf("%d", add(1, 2));

    // 'count' (10) and '1' (the arguments) are passed to the 'add' function.
    // The returned result (the sum of 10 and 1) is then assigned to the 'count' variable.

    count = add(count, 1);

}

// The 'return' statement sends the result of the calculation back to the place where the function was called.
int add(int num1, int num2){
    return num1 + num2;
}