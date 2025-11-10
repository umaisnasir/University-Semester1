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


// #include <stdio.h>

// int main (){
//     int count, n = 5, inc = 1, i;
//     int spc = n - 1;
//     int digit;
    
//     for(count = 1; count <= 9; count++){

//         if (count <= 5){

//             digit = 6 - count;
//         }
//         else{
//             digit = count - 4;
//         }
        
        
//         for(i = 1; i <= spc; i++){
//             printf(" ");
//         }
        
//         for(i = 1; i <= (9 - 2*spc); i++){
//             printf("%d", digit);
//             digit++;
//         }

//         printf("\n");
//         if(count == 5){
//             inc = -1;
//         }

//         spc = spc - inc;
//     }

//     return 0;
// }
