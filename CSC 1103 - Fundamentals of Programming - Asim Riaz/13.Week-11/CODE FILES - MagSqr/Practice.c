// #include <stdio.h>

// int main (void){
//     int number;
//     int current_index = 0;
//     int previous_index = current_index;
//     int count = 1;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     int magicsquare[number*number];

//     for (int x = 0; x < number*number; x++){
//         magicsquare[x] = 0;
//     }

//     current_index = number / 2;

//     magicsquare[current_index] = count;

//     while (count != number*number){

//         /*TOP*/
        
//         if (current_index - number < 0){
//             current_index = current_index + (number*number) - number;
//         }
//         else{
//             current_index -= number;
//         }
        
//         /*RIGHT*/

//         if ((current_index + 1) % number == 0){
//             current_index = current_index - (number - 1);
//         }else{
//             current_index++;
//         }

//         if (magicsquare[current_index] != 0){
//             current_index = previous_index;
//             current_index = current_index + number;
//         }

//         /*STORE*/

//         magicsquare[current_index] = ++count;

//         previous_index = current_index;

//     }


//     for (int i = 0; i < number*number; i++){
//         printf("%2d ", magicsquare[i]);

//         if ((i + 1) % number == 0){
//             printf("\n");
//         }
//     }


// }


// #include <stdio.h>

// int main (void){

//     int num;
//     int currrent_index = 0;
//     int count = 1;
//     int pevious_index = currrent_index;

//     printf("Enter any Odd Number (3): ");
//     scanf("%d", &num);

//     int magic_sqr[num*num];

//     for (int i = 0; i < num*num; i++){
//         magic_sqr[i] = 0;
//     }

//     currrent_index = num / 2;

//     magic_sqr[currrent_index] = count;

//     while (count != num*num){

//         if (currrent_index - num < 0){
//             currrent_index = currrent_index + (num * num) - num;
//         }
//         else{
//             currrent_index -= num;
//         }

//         if ((currrent_index + 1) % num == 0){
//             currrent_index = currrent_index - (num - 1);
//         }
//         else{
//             currrent_index++;
//         }

//         if (magic_sqr[currrent_index] != 0){
//             currrent_index = pevious_index;
//             currrent_index = currrent_index + num;
//         }

//         magic_sqr[currrent_index] = ++count;
//         pevious_index = currrent_index;
//     }


//     for (int i = 0; i < num*num; i++){
//         printf("%2d ", magic_sqr[i]);
//         if ((i+1) % num == 0){
//             printf("\n");
//         }
//     }
// }