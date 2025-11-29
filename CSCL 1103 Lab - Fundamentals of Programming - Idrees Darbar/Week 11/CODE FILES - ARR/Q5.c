// Develop a program that reverses the elements of an array.

#include <stdio.h>

int main (void){

    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d",&SizeArray);

    int Array[SizeArray];

    int num;

    for (int i = 0; i<SizeArray; i++){

        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &num);

        Array[i] = num;
    
    }


    for (int i = 0; i < SizeArray / 2; i++) {   // loop until the middle of the array.

        int temp = Array[i];  // store the current value at index in temp.

        Array[i] = Array[SizeArray - 1 - i];  // store 9 - 1 - i in Array[i].

        Array[SizeArray - 1 - i] = temp; // store the last index's value in the first index.
    }

    printf("Contents of the Reversed array: ");
    for (int i = 0; i < SizeArray; i++){
        printf("%d ", Array[i]);
    }


}