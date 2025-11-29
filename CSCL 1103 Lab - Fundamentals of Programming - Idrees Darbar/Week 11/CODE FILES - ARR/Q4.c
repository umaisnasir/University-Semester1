// Develop a program to merge two arrays into a single array.

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

    printf("Contents of the first array: ");
    for (int i = 0; i < SizeArray; i++){
        printf("%d ", Array[i]);
    }

//------------------------------------------------------------------------------------------------------------

    int SizeArray2;
    printf("\nEnter the size of the ARRAY 2: ");
    scanf("%d",&SizeArray2);

    int Array2[SizeArray2];
    int num2;

    for (int j = 0; j<SizeArray2; j++){

        printf("Enter a number to store inside the ARRAY 2: ");
        scanf("%d", &num2);

        Array2[j] = num2;
        
    }

    printf("Contents of the second array: ");
    for (int j = 0; j < SizeArray2; j++){
        printf("%d ", Array2[j]);
    }

//------------------------------------------------------------------------------------------------------------


    int MergedArray[SizeArray + SizeArray2];

    for (int i = 0; i < SizeArray; i++) {
        MergedArray[i] = Array[i];
    }

    for (int j = 0; j < SizeArray2; j++) {
        MergedArray[SizeArray + j] = Array2[j];
    }

    printf("\nContents of the merged array: ");
    for (int i = 0; i < SizeArray + SizeArray2; i++) {
        printf("%d ", MergedArray[i]);
    }
    printf("\n");

    return 0;


}