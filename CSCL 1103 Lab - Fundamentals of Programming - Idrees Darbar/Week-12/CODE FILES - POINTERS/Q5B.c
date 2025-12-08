// Write a program and show the memory address of 10 indexes, array data type was integer and
// shows the addresses of particular array on screen?

// VLA METHOD

#include <stdio.h>

int main(void) {
    int ArraySize;
    printf("Enter array size: ");
    scanf("%d", &ArraySize);

    int Array[ArraySize];  
    int *pointer = Array;  // Pointer now contains the address of Array[0]
                           // pointer = 0x10000

    
    for (int i = 0; i < ArraySize; i++) {
        *(pointer + i) = (i + 1) * 5;  // same as Array[i]
    //  Array[i] = (i + 1) * 5
    // go to the address of array element 1 and get the value there.
    }

    // Print values and addresses using pointer
    for (int i = 0; i < ArraySize; i++) {
        printf("Index %d -> Value: %d, Address: %p\n", i, *(pointer + i), (pointer + i));
    }

    return 0;
}