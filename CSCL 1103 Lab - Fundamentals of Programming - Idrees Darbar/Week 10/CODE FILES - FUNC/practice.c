// #include <stdio.h>

// int fibonacci(int num){

//     if (num == 0){
//         return 0;
//     }
//     if (num == 1){
//         return 1;
//     }

//     return fibonacci(num - 1) + fibonacci(num - 2);
// }



// int main (){

//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     printf("Fibonacci (%d) = %d\n", num, fibonacci(num));

//     for (int i = 0; i <= num; i++){

//         printf("The series is: %d\n", fibonacci(i));
//     }

//     return 0;
// }



// #include <stdio.h>

// int findMax(int SizeArray, int Array[]){

//     int maxval = Array[0];

//     for (int i = 0; i < SizeArray; i++){

//         if (Array[i] > maxval){
//             maxval = Array[i];
//         }
//     }

//     return maxval;
// }

// int main (){

//     int SizeArray;

//     printf("Enter the size of the Array: ");
//     scanf("%d", &SizeArray);

//     int Array[SizeArray];

//     for (int i = 0; i < SizeArray; i++){
//         printf("Enter any number to place it in the array: ");
//         scanf("%d", &Array[i]);


//     }

//     int RetVal = findMax(SizeArray, Array);
//     printf("The maximum value is: %d\n", RetVal);

//     return 0;
// }