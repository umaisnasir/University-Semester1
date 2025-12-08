// Write a program that demonstrates the use of a null pointer. Declare a pointer, initialize it to
// NULL, and then check if it's pointing to anything before accessing the value.


#include <stdio.h>

int main(void) {
    int *ptr = NULL;  

    
    if (ptr == NULL) {
        printf("The pointer is NULL and does not point to any valid memory.\n");
    } else {
        // Safe access if not NULL (won't execute here)
        printf("Pointer points to value: %d\n", *ptr);
    }

//  Demonstrate that a null pointer can later be assigned a valid address (FOR SHOWING PURPOSES ONLY)

    int x = 100;
    ptr = &x; 

    if (ptr != NULL) {
        printf("Pointer now points to a valid value: %d\n", *ptr);
    }

    return 0;
}
