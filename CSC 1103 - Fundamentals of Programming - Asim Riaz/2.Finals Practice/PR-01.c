// #include <stdio.h>

// int main (void){
//     int current_index = 0;
//     int count = 1;
//     int num;
//     int previous_index = current_index;

//     printf("Enter the odd number: ");
//     scanf("%d", &num);

//     int magicsqr[num*num];

//     for (int c = 0; c < num * num; c++){
//         magicsqr[c] = 0;
//     }

//     current_index = num / 2;

//     magicsqr[current_index] = count;

//     while (count != num*num){

//         if (current_index - num < 0){
//             current_index = current_index + (num*num) - num;
//         }
//         else{
//             current_index = current_index - num;
//         }

//         if ((current_index + 1) % num == 0){
//             current_index = current_index - (num - 1);
//         }
//         else{
//             current_index = current_index + 1;
//         }

//         if (magicsqr[current_index] != 0){
//             current_index = previous_index;
//             current_index = current_index + num;
//         }

//         magicsqr[current_index] = ++count;
//         previous_index = current_index;

//     }

//     for (int i = 0; i < num*num; i++)
//     {
           
//         printf("%3d ", magicsqr[i]);

//         if((i+1) % num == 0){
//             printf("\n");
//         }
//     }

// }