// Create a program that inserts an element at a specified position in an array.

/*#include <stdio.h>

int main (void){

    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d",&SizeArray);

    int Array[SizeArray + 1];  // allocated one extra space for the new number that we will append.
    int num;

    for (int i = 0; i<SizeArray; i++){

        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &num);

        Array[i] = num;
        
    }

    int new_value;

    printf("Enter a new value: ");
    scanf("%d", &new_value);


    Array[SizeArray] = new_value; // Now the size itself will serve as the last element.
    SizeArray++; // tells your program that the array now has one more element inside it.
                  
    
    printf("\nArray contents after adding new value: ");
    for (int i = 0; i < SizeArray; i++) {  // print with the updated length.
        printf("%d ", Array[i]);
    }

    printf("\n");

    return 0;
} */

#include <stdio.h>

/* Function to insert an element at a given position */
void insertElement(int arr[], int *size, int position, int value) {
    // Shift elements to the right
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[position] = value;

    // Increase array size
    (*size)++;
}

int main(void) {
    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d", &SizeArray);

    int Array[SizeArray + 1];  // extra space for insertion

    for (int i = 0; i < SizeArray; i++) {
        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &Array[i]);
    }

    int new_value, position;

    printf("Enter the new value: ");
    scanf("%d", &new_value);

    printf("Enter the position (0 to %d): ", SizeArray);
    scanf("%d", &position);

    // Insert element
    insertElement(Array, &SizeArray, position, new_value);

    printf("\nArray contents after insertion: ");
    for (int i = 0; i < SizeArray; i++) {
        printf("%d ", Array[i]);
    }

    printf("\n");
    return 0;
}
