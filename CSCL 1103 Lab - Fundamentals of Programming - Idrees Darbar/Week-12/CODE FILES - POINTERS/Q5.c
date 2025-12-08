// Write a program and show the memory address of 10 indexes, array data type was integer and
// shows the addresses of particular array on screen?

// NORMAL METHOD

#include <stdio.h>


int main(void) {

    int Array[10] = {10, 15, 20, 25, 30, 35, 40, 45, 50, 55};

    int *pointer = Array;   // points to the first element of the array

    for (int i = 0; i < 10; i++) {
        printf("Index %d -> Value: %d, Address: %p\n", i, *pointer, pointer);
        pointer++;          // move to the next integer (4 bytes ahead)
    }

    return 0;
}