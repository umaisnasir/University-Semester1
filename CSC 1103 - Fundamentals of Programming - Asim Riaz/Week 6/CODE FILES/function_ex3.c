#include <stdio.h> 

int add(int num1, int num2); // Function takes three arguments.
int main(void) {

    int count = 10;

    printf("%d", add(add(1, 2), 3));  // Line 6 : Count = 10
                                      // Line 8 & 20 : num1 = 1 , num2 = 2
                                      // Line 21 : 1+2 = 3
                                      // num1 = 3, num2 = 3
                                      // Before Line 17 : count = 10
                                      // After Line 17 execution, in line 21 : num1 = 10, num2 = 1
                                      // count = 11 after num1 + num2 in Line 21
                                      
                                       
    count = add(count, 1);
}

int add(int num1, int num2){
    return num1 + num2;
}