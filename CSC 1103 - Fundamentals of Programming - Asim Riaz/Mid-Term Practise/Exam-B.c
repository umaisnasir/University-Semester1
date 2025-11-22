// Q1

// #include <stdio.h>

// int main(void) {
//     int user_input;
//     int sum = 0;
//     int count = 0;
//     float avg;

//     while (user_input != -1) {

//         printf("Enter grade, -1 to end: ");
//         scanf("%d", &user_input);

//         sum += user_input;
//         count++;
       
//     }

//     if (count > 0) {
//         avg = (float)sum / count;
//         printf("Class average is %.2f\n", avg);
//     } else {
//         printf("No grades were entered.\n");
//     }

//     return 0;
// }


// Q2

// #include<stdio.h>

// int main (void){

//     int vert;
//     int horiz;
//     int count = 3;
//     int Temp = 1;
//     int Jump = 1;

//     for (vert = 1; vert <=6; vert++){
        
//         count = 3 * Temp;
        
//         for (horiz = 1; horiz <= 4; horiz++){

//             printf("%d\t", count);

//             count += (6 * Jump);
            
//         } 

//         printf("\n");

//         Temp = Temp + 1;

//         Jump += 1;

//     }

// }


// #include<stdio.h>

// int main (void){

//     int elements = 5;
//     int space = elements - 1;
//     int inc = 1;
//     int row, col;
//     int letter;

//     for (row = 1; row <= 9; row++){

//         letter = 82 + space;

//         for (col = 1; col <= elements; col++){

            

//             if (space >= col){
//                 printf(" ");

//             }
//             else{
//                 printf("%c", letter);
//                 letter++;
//             }

//         }

//         printf("\n");

//         if (elements == 9){
//             inc = -1;
//         }

//         elements += inc;
//         space -= inc;

//     }

// }
