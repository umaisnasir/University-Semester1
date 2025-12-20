// #include<stdio.h>

// int main (void){
//     int ArraySize;

//     printf("Enter the size of the array: ");
//     scanf("%d", &ArraySize);

//     int Array[ArraySize];

//     for (int i = 0; i < ArraySize; i++){
//         int num;

//         printf("Enter a number to insert in the array: ");
//         scanf("%d", &num);

//         Array[i] = num;
//     }

//     printf("\nContents of Array 1: ");
//     for(int i = 0; i < ArraySize; i++){
//         printf("%d ", Array[i]);
//     }

// //-----------------------------------------------------

//     int ArraySize2;

//     printf("\n\nEnter the size of the array 2: ");
//     scanf("%d", &ArraySize2);

//     int Array2[ArraySize2];

//     for (int i = 0; i < ArraySize2; i++){
//         int num2;

//         printf("Enter a number to insert in the array 2: ");
//         scanf("%d", &num2);

//         Array2[i] = num2;
//     }

//     printf("\nContents of Array 2: ");
//     for(int i = 0; i < ArraySize2; i++){
//         printf("%d ", Array2[i]);
//     }

// //-----------------------------------------------------

//     int mergedArray[ArraySize + ArraySize2];

//     for (int x = 0; x < ArraySize2; x++){
//         mergedArray[x] = Array[x];
//     }

//     for (int y = 0; y < ArraySize2; y++){
//         mergedArray[ArraySize + y] = Array2[y];
//     }
    
//     printf("\n\nContents of the Merged Array: ");
//     for (int z = 0; z < ArraySize + ArraySize2; z++){
//         printf("%d ", mergedArray[z]);

//     }


// }


// #include <stdio.h>

// int main (void){
//     int SizeArray;

//     printf("Enter the size of the ARRAY: ");
//     scanf("%d",&SizeArray);

//     int Array[SizeArray];

//     int num;

//     for (int i = 0; i<SizeArray; i++){

//         printf("Enter a number to store inside the ARRAY: ");
//         scanf("%d", &num);

//         Array[i] = num;
    
//     }
//     int Temp;
//     for (int i = 0; i < SizeArray / 2; i++){
        
//         Temp = Array[i];
//         Array[i] = Array[SizeArray - 1 - i];
//         Array[SizeArray - 1 - i] = Temp;
//     }
    
//     printf("\n\nContents of the reversed array: ");
//     for (int x = 0; x < SizeArray; x++){
//         printf("%d ", Array[x]);
//     }


// }


