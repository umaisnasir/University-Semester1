// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main (void){

//     int row,col;
//     int bound = 1;
//     int userinp;
//     int inc = 1;
    
//     printf("Enter the number of rows: ");
//     scanf("%d", &userinp);

//     for (row = 1; row <= 2*userinp - 1; row++){
//         for (col = 1; col <= bound; col++){
//             printf("*");
//         }

//         if (userinp == bound){
//             inc = -1;
//         }

//         printf("\n");

//         bound = bound + inc;

//     }   
// }



// #include<stdio.h>
// int main() {
//     int count,n=1, i;
//     for(count=1; count<=7; count++){
//         for(i=1; i<=7; i++){
//             if (i<=n){
//                 printf("%d",i);
//             }
//             else{
//                 printf("*");
//             }
                       
//         }
//         puts("");
//         n++;
//     }
// }


// #include<stdio.h>

// int main (void){

//     int elements = 5;
//     int space = elements - 1;
//     int inc = 1;
//     int row, col;

//     for (row = 1; row <= 9; row++){
//         for (col = 1; col <= elements; col++){
//             if (space >= col){
//                 printf(" ");

//             }
//             else{
//                 printf("*");
//             }
            
//         }

//         printf("\n");

//             if (elements == 9){
//                 inc = -1;
//             }

//         elements += inc;
//         space -= inc;

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


// #include<stdio.h>

// int main (void){

//     int elements = 5;
//     int space = elements - 1;
//     int inc = 1;
//     int row, col;
//     int letter;

//     for (row = 1; row <= 9; row++){

//         letter = space + 1;

//         for (col = 1; col <= elements; col++){


//             if (space >= col){
//                 printf(" ");

//             }
//             else{
//                 printf("%d", letter);
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



// #include<stdio.h>

// int main (void){

//     int elements = 10;
//     int space = elements - 1;
//     int inc = 1;
//     int row, col;

//     for (row = 1; row <= 10; row++){
//         for (col = 1; col <= elements; col++){
//             if (space >= col){
//                 printf(" ");
//             }
//             else{
//                 printf("*");
//             }
            
//         }

//         printf("\n");

            
//         elements += inc;
//         space -= inc;

//     }

    

// }


// #include <stdio.h>

// int main (void){

//     int row, col;
//     int col_count = 1;
//     int inc = 1;

//     int num = 14;


//     for (row = 1; row <= num - 1; row++){

//         for (col = 1; col <= col_count; col++){
//             printf("*");
//         }

//         printf("\n");
        

//         if (row == num / 2){
//             inc=-1;
//         }

//         col_count += inc;

//     }
    
// }


// #include <stdio.h>

// int main (void){
//     int row,col;
//     int inc = 1;
//     int stars = 1;
//     int userinput;

//     printf("Enter a number for rows: ");
//     scanf("%d", &userinput);

//     stars = 1;

//     for (row = 1; row <= (2*userinput - 1); row++){
//         for(col = 1; col <= stars; col++){
//             printf("*");
//         }

//         printf("\n");

//         if (stars == userinput){
//             inc = -1;
//         }

//         stars += inc;
//     }
// }



// #include<stdio.h>

// int main (void){

//     int row, col;

//     int jump = 1;


//     for (row = 1; row <=7; row++){
//         for (col = 1; col <= 7; col++){
//             if (col <= jump){
//                 printf("%d", col);
//             }
//             else{
//                 printf("*");
//             }

//         }
//         printf("\n");
//         jump++;
//     }
// }

#include<stdio.h>

int main (void){

    int elements = 10;
    int space = elements - 1;
    int inc = 1;
    int row, col;

    for (row = 1; row <= 10; row++){
        for (col = 1; col <= elements; col++){
            if (space >= col){
                printf(" ");
            }
            else{
                printf("*");
            }
            
        }

        printf("\n");

            
        elements += inc;
        space -= inc;

    }

    

}