// #include <stdio.h>

// int main (void){

//     int SizeArray;

//     printf("Enter a number: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray + 1];

//     int userinp;

//     for (int i = 0; i < SizeArray; i++){

//         printf("Enter a number to insert: ");
//         scanf("%d", &userinp);

//         Array[i] = userinp;
//     }

//     // int newvalue;

//     // printf("Enter a new value to insert: ");
//     // scanf("%d", &newvalue);

//     // Array[SizeArray] = newvalue;
//     // SizeArray++;

//     // printf("The updated contents of the Array: ");

//     // for (int i = 0; i < SizeArray; i++){
//     //     printf("%d ", Array[i]);
//     // }

//     // printf("\n");


// }


// #include <stdio.h>

// int main (void){

//    int SizeArray;

//    printf("Enter the size of the first Array: ");
//    scanf("%d", &SizeArray);

//    int Array[SizeArray];
//    int userinput;

//    for (int i = 0; i < SizeArray; i++){
       
//        printf("Enter a number to insert: ");
//        scanf("%d", &userinput);

//        Array[i] = userinput;
//    }
   
//    printf("Contents of the first array: ");

//    for (int i = 0; i < SizeArray; i++){
        
//        printf("%d ", Array[i]);
//    }




//    int SizeArray2;

//    printf("\nEnter the size of the first Array 2: ");
//    scanf("%d", &SizeArray2);

//    int Array2[SizeArray2];
//    int userinput2;

//    for (int i = 0; i < SizeArray2; i++){
       
//        printf("Enter a number to insert: ");
//        scanf("%d", &userinput2);

//        Array2[i] = userinput2;
//    }
   
//    printf("Contents of the second array: ");

//    for (int i = 0; i < SizeArray2; i++){
        
//        printf("%d ", Array2[i]);
//    }


//    int MergedArray[SizeArray + SizeArray2];

//    for (int i = 0; i < SizeArray; i++){
//        MergedArray[i] = Array[i];
//    }

//    for (int j = 0; j < SizeArray2; j++){
//        MergedArray[SizeArray + j] = Array2[j];
//    }

//    printf("\ncontents of the merged array: ");

//    for (int k = 0; k < SizeArray + SizeArray2; k++){
//        printf("%d ", MergedArray[k]);
//    }

//    printf("\n");



// }



// #include <stdio.h>

// int main (void){

//     int SizeArray;

//     printf("Enter the size of the Array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];

//     int userinput;

//     for (int i = 0; i < SizeArray; i++){

//         printf("Enter a number to insert into the array: ");
//         scanf("%d", &userinput);

//         Array[i] = userinput;
//     }

//     for (int i = 0; i < SizeArray / 2; i++){
        
//         int temp = Array[i];

//         Array[i] = Array[SizeArray - 1 - i];

//         Array[SizeArray - 1 - i] = temp;


//     }

//     printf("Contents of the Reversed Array: ");

//     for (int i = 0; i < SizeArray; i++){
//         printf("%d ", Array[i]);
//     }
// }


// #include <stdio.h>

// int main (void){

//     int SizeArray;

//     printf("Enter the size of the Array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];

//     int userinput;

//     for (int i = 0; i<SizeArray; i++){

//         printf("Enter a number to store inside the ARRAY: ");
//         scanf("%d", &userinput);

//         Array[i] = userinput;
//     }

//     int searchvalue;

//     printf("Enter a num .... corresponding index pos: ");
//     scanf("%d", &searchvalue);

//     for (int i = 0; i < searchvalue; i++){

//         if (Array[i] == searchvalue){
//             printf("The index of this value is: %d", i);
//         }
//     }


// }



// #include <stdio.h>

// int main (void){

//     int ArraySize = 5;

//     char Array[ArraySize];

//     for (int i = 0; i < ArraySize; i++){
//         Array[i] = '*';
//     }

//     for (int i = 0; i < ArraySize; i++){
//         for (int j = 0; j < ArraySize; j++){
//             printf("%c ", Array[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main (void){

//     int ArraySize = 10;

//     char Array[ArraySize];

//     for (int i = 0; i < ArraySize; i++){
//         Array[i] = '*';
//     }

//     for (int i = 0; i < ArraySize; i++){
//         for (int j = 0; j < i; j++){
//             printf("%c ", Array[j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
