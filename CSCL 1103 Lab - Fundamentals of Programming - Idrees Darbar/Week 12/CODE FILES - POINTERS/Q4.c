// Write a program to swap value of two variables using pointer

#include <stdio.h>

int main (void){

    int variable1;
    int variable2;

    int* pointer_var1;
    int* pointer_var2;

    pointer_var1 = &variable1;

    printf("Enter the first number: ");
    scanf("%d", pointer_var1);    // Store the integer input into the memory location that pointer_var1 points to.

    pointer_var2 = &variable2;

    printf("Enter the second number: ");
    scanf("%d", pointer_var2);    // Store the integer input into the memory location that pointer_var2 points to.

    int temp_var;


    // Swapping
    temp_var = *pointer_var1;
    *pointer_var1 = *pointer_var2;
    *pointer_var2 = temp_var;

    printf("Variable 1 now has the value: %d\n",*pointer_var1 );
    printf("Variable 2 now has the value: %d\n",*pointer_var2 );

}

#include <stdio.h>

/* Function to swap two integers using pointers */
/*void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int variable1, variable2;
    int *pointer_var1 = &variable1;
    int *pointer_var2 = &variable2;

    // Input values using pointers
    printf("Enter the first number: ");
    scanf("%d", pointer_var1);

    printf("Enter the second number: ");
    scanf("%d", pointer_var2);

    // Swap the values using the function
    swap(pointer_var1, pointer_var2);

    // Print swapped values
    printf("Variable 1 now has the value: %d\n", *pointer_var1);
    printf("Variable 2 now has the value: %d\n", *pointer_var2);

    return 0;
}*/
