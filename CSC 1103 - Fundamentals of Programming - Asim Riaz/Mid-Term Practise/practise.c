// Write a program that repeatedly takes input of four numbers from the user.
// The program should continue executing until the sum of those four numbers equals 100.
// Use a sentinel-controlled loop to achieve this functionality.


// #include<stdio.h>

// int main (void){
    
//     int user_input, index;
//     int sum = 0;

//     while (sum != 100){

//         sum = 0;

//         for (index = 1; index <= 4; index++){
            
//             printf("Enter a number: ");
//             scanf("%d", &user_input);
            
//             sum = sum + user_input;

//         }

//         if (sum == 100){

//             break;

//         }
//         else{
//             printf("The sum is not 100, try again!\n");

//         }

//     }

//     printf("The sum is now 100!\n");
    
// }




// #include<stdio.h>

// int main (void){

//     int row, col;
//     int start_num = 4;
//     int Output_Num;

//     // 4 col
//     // 6 row
//     //nested - for

//     for (row = 1; row <= 6; row++ ){

//         // resetting

//         Output_Num = start_num;
        

//         for (col = 1; col <= 4; col++){

//             printf("%4d", Output_Num);  // print the first number

//             Output_Num = Output_Num + 4;  // 4,8,12,16 (hoirzontal)
//         }

//         printf("\n");  // print a new line after every column

//         start_num = start_num + 3; // next row - +3 after every starting number

        
//     }

//     return 0;
// }



// #include <stdio.h>
// int main (){
//     int count, n = 5, inc = 1, i;
//     int spc = n - 1;
    
//     for(count = 1; count <= 9; count++){
        
//         int letter = 82 + spc;  

//         for(i = 1; i <= spc; i++){
//             printf("-");
//         }
        
//         for(i = 1; i <= (9 - 2*spc); i++){
//             printf("%c", letter);
//             letter++;
//         }

//         printf("\n");
//         if(count == 5){
//             inc = -1;
//         }

//         spc = spc - inc;
//     }

//     return 0;
// }



// Write a sentinel loop program that continuously takes integer input from the user until the user enters 0.
// For each number entered, the program should display whether it is even or odd.
// After the user enters 0, the program should display the total count of even and odd numbers entered.


// # include<stdio.h>

// int main (void){

//     int user_input = 1;
//     int odd_count = 0, even_count = 0;

//     while (user_input != 0){

//         printf("Enter the number: ");
//         scanf("%d", &user_input);


//         if (user_input != 0){  // 0 is neutral

    
//             if (user_input % 2 == 0){
//                 printf("The number is even\n");
//                 even_count += 1;

//             }
//             else{
//                 printf("The number is odd\n");
//                 odd_count += 1;
//             }
//         }

//     }

//     printf("The even count is: %d\n", even_count);
//     printf("The odd count is: %d\n", odd_count);

// }


// #include<stdio.h>

// int main (void){

//     int row, col;
//     int start_num = 3;
//     int Output_Num;

//     // 4 col
//     // 6 row
//     //nested - for

//     for (row = 1; row <= 6; row++ ){

//         // resetting

//         Output_Num = start_num;
        

//         for (col = 1; col <= 4; col++){

//             printf("%4d", Output_Num);  // print the first number

//             Output_Num = Output_Num + 2;  // 4,8,12,16 (hoirzontal)
//         }

//         printf("\n");  // print a new line after every column

//         start_num = start_num + 2; // next row - +3 after every starting number

        
//     }

//     return 0;
// }

