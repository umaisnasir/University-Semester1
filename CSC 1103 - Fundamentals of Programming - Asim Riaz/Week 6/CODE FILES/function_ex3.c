#include <stdio.h> 

int add(int num1, int num2); // Function takes three arguments.

int main(void) {

    

    printf("%d", add(add(1, 2), 3));  // add(1,2) will run first
                                      // as a result of which, the answer of add(1,2) will be added with 3.
                                      // The specific term for the structure add(add(1, 2), 3) is a Nested Function Call.
                                      
                                       
}

int add(int num1, int num2){
    return num1 + num2;
}