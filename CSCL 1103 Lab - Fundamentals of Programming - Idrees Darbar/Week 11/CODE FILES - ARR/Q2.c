// Create a program to find the largest element in an array of numbers.

#include <stdio.h>

int main (void){

    int SizeArray;

    printf("Enter the size of the ARRAY: ");
    scanf("%d",&SizeArray);

    int Array[SizeArray];
    int num;

    int largest = 0;

    for (int i = 0; i<SizeArray; i++){

        printf("Enter a number to store inside the ARRAY: ");
        scanf("%d", &num);

        Array[i] = num;

        if (Array[i] > largest){
            largest = Array[i];
        }

    }

    printf("The largest of the numbers in the array is: %d", largest);
} 


/*#include <stdio.h>

// Function to find the largest element using pass-by-reference 
void largestFunc(int Array[], int SizeArray, int *largest) {
    *largest = Array[0];  // Initialize largest with the first element

    for (int i = 1; i < SizeArray; i++) {
        if (Array[i] > *largest) {
            *largest = Array[i];
        }
    }
}

int main(void) {
    int SizeArray;

    printf("Enter the size of the array: ");
    scanf("%d", &SizeArray);

    int Array[SizeArray];

    // Fill the array
    for (int i = 0; i < SizeArray; i++) {
        printf("Enter a number to store inside the array: ");
        scanf("%d", &Array[i]);
    }

    int largest;
    largestFunc(Array, SizeArray, &largest); // Pass address of largest

    printf("The largest of the numbers in the array is: %d\n", largest);

    return 0;
}*/
