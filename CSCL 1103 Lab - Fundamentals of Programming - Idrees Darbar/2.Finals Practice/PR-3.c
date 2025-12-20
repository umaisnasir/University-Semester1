// #include <stdio.h>

// int func(int a, int b){
//     return a*b;
// }

// int main (void){
//     int a,b;

//     printf("enter num1: ");
//     scanf("%d", &a);
    
//     printf("enter num2: ");
//     scanf("%d", &b);

//     int retval = func(a,b);

//     printf("%d", retval);
// }


// #include <stdio.h>

// int racetopower(int base, int expo){
//     int res = 1;

//     for (int i = 0; i < expo; i++){
//         res = res * base;
//     }

//     return res;
// }

// int main (void){
//     int base, expo;

//     printf("Enter the base: ");
//     scanf("%d", &base);

//     puts(" ");

//     printf("Enter the expo: ");
//     scanf("%d", &expo);

//     int retval = racetopower(base, expo);

//     printf("%d", retval);

    
// }


// #include <stdio.h>

// int fib(int num){

//     if (num == 0){
//         return 0;
//     }
//     if(num == 1){
//         return 1;
//     } 

//     return fib(num-1) + fib(num-2);
// }

// int main (void){

//     int num;

//     printf("Enter num: ");
//     scanf("%d", &num);

//     printf("Fib(%d) is: %d\n", num, fib(num));

//     for (int i = 0; i <= num; i++){
//         printf("fib(%d) is: %d\n", i, fib(i));
//     }
// }


// #include <stdio.h>

// int findmax (int array[], int arraysize){

//     int max = array[0];

//     for (int i = 0; i < arraysize; i++){
//         if (array[i] > max){
//             max = array[i];
//         }
//     }

//     return max;

// }

// int main (void){

//     int arraysize;

//     printf("enter the size of the array: ");
//     scanf("%d", &arraysize);

//     int array[arraysize];

//     int num;

//     for (int i = 0; i < arraysize; i++){
        
//         printf("Enter a number to store inside the array: ");
//         scanf("%d", &num);

//         array[i] = num;
//     }

//     int retval = findmax(array, arraysize);

//     printf("The maxmimum value is: %d\n", retval);
// }


// #include <stdio.h>

// int main (void){
//     int SizeArray;

//     printf("Enter the size of the ARRAY: ");
//     scanf("%d",&SizeArray);

//     int Array[SizeArray + 1];  // allocated one extra space for the new number that we will append.
//     int num;

//     for (int i = 0; i<SizeArray; i++){

//         printf("Enter a number to store inside the ARRAY: ");
//         scanf("%d", &num);

//         Array[i] = num;
        
//     }

//     int newvalue;

//     printf("Enter a new value: ");
//     scanf("%d", &newvalue);

//     Array[SizeArray] = newvalue;
//     SizeArray++;

//     printf("\nArray contents after adding new value: ");

//     for (int i = 0; i < SizeArray; i++) {  // print with the updated length.
//         printf("%d ", Array[i]);
//     }

//     printf("\n");

//     return 0;
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

//     printf("Contents of the first array: ");
//     for (int i = 0; i < SizeArray; i++){
//         printf("%d ", Array[i]);
//     }

// //------------------------------------------------------------------------------------------------------------

//     int SizeArray2;
//     printf("\nEnter the size of the ARRAY 2: ");
//     scanf("%d",&SizeArray2);

//     int Array2[SizeArray2];
//     int num2;

//     for (int j = 0; j<SizeArray2; j++){

//         printf("Enter a number to store inside the ARRAY 2: ");
//         scanf("%d", &num2);

//         Array2[j] = num2;
        
//     }

//     printf("Contents of the second array: ");
//     for (int j = 0; j < SizeArray2; j++){
//         printf("%d ", Array2[j]);
//     }
    

// //------------------------------------------------------------------------------------------------------------

//     int mergedarray[SizeArray + SizeArray2];

//     for(int a = 0; a < SizeArray; a++){
//         mergedarray[a] = Array[a];
//     }

//     for(int b = 0; b < SizeArray2; b++){
//         mergedarray[SizeArray + b] = Array2[b];
//     }

//     printf("\nContents of the merged array: ");
//     for (int i = 0; i < SizeArray + SizeArray2; i++) {
//         printf("%d ", mergedarray[i]);
//     }
//     printf("\n");

//     return 0;


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

//     for (int i = 0; i < SizeArray / 2; i++){
//         int temp = Array[i];
//         Array[i] = Array[SizeArray - 1 - i];
//         Array[SizeArray - 1 - i] = temp;
//     }

//     printf("Contents of the Reversed array: ");
//     for (int i = 0; i < SizeArray; i++){
//         printf("%d ", Array[i]);
//     }

// }


// #include <stdio.h>

// int main (void){
    
//     int arr[]={5,10,15,20,25,30,35,40,45,50,55,60};

//     int *pointer = arr;
//     int sum = 0;

//     for (int i = 0; i < sizeof(arr); i++){

//         sum = sum + *pointer;
//         pointer++;

//     }

//     printf("%d", sum);
// }

// Write a program to swap value of two numbers using pointers in functions.

// #include <stdio.h>

// int main (void){

//     int var1;
//     int var2;

//     int* ptr1;
//     int* ptr2;

//     ptr1 = &var1;

//     printf("Enter the first value: ");
//     scanf("%d", ptr1);

//     ptr2 = &var2;

//     printf("Enter the second value: ");
//     scanf("%d", ptr2);

//     *ptr1 = *ptr1 + *ptr2;
//     *ptr2 = *ptr1 - *ptr2;
//     *ptr1 = *ptr1 - *ptr2;

//     printf("First value: %d\n", *ptr1);
//     printf("Second value: %d\n", *ptr2);

// }\


// Write a program and show the memory address of 10 indexes, array data type is integer and
// shows the addresses of particular array on screen?

// #include<stdio.h>

// int main(void){

//     int ArraySize;

//     printf("Enter a value: ");
//     scanf("%d", &ArraySize);

//     int array[ArraySize];

//     int* pointer = array;

//     for (int i = 0; i < ArraySize; i++){

//         *(pointer + i) = (i * 1) * 5;

//     }

//     for (int j = 0; j < ArraySize; j++){
//         printf("The index is: %d ----> Value: %d -----> Memory Loc: %p\n", j, *(pointer + j),(pointer + j));
//     }
// }


// Write a program to read a sentence and count the number of characters & words in that sentence.

// user-input based

// #include <stdio.h>
// #include <string.h>

// int main (void){

//     char char_arr[100];

//     int chars = 0;
//     int words = 1;

//     printf("Enter a string: ");
//     fgets(char_arr, 100, stdin);

//     for (int i = 0; char_arr[i] != '\0'; i++){

//         chars++;

//         if (char_arr[i] == ' '){
//             words++;
//         }
//     }

//     printf("The words are: %d\n", words);
//     printf("The characters are: %d\n", chars);

// }

// #include <stdio.h>
// #include <string.h>

// int main (void){

//     char charac_array[100];
//     char charac_array2[100];


//     printf("Enter a string: ");
//     fgets(charac_array, 100, stdin);
//     charac_array[strcspn(charac_array, "\n")] = '\0';

//     printf("Enter another string: ");
//     fgets(charac_array2, 100, stdin);
//     charac_array2[strcspn(charac_array2, "\n")] = '\0';

//     strcat(charac_array, charac_array2);

//     printf("Concatenated string: %s\n", charac_array);

// }

// #include <stdio.h>
// #include <string.h>

// int main (void){

//     char userhc[100] = "umais";
//     char passhc[100] = "abc123";

//     char usertry[100];
//     char passtry[100];

//     printf("Enter a username: ");
//     fgets(usertry, 100, stdin);
//     usertry[strcspn(usertry, "\n")] = '\0';

//     printf("Enter a pass: ");
//     fgets(passtry, 100, stdin);
//     passtry[strcspn(passtry, "\n")] = '\0';

//     if (strcmp(userhc,usertry) == 0 && strcmp(passhc,passtry) == 0 ){
//         printf("Both username and password are similar.");
//     }
//     else if(strcmp(userhc, usertry) == 0){
//         printf("Username is Similar");
//     }
//     else if(strcmp(passhc, passtry) == 0){
//         printf("Password is similar");
//     }
//     else{
//         printf("Enter the correct input");
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <ctype.h>

// int main (void){

//     char char_array[100];
//     int user_choice;

//     printf("Enter a string: ");
//     fgets(char_array, 100, stdin);


//     printf("\nChoose an option:\n");
//     printf("1. Lowercase to Uppercase\n");
//     printf("2. Uppercase to Lowercase\n");
//     printf("3. Toggle Case\n");
//     printf("Enter your choice: ");
//     scanf("%d", &user_choice);

//     for (int i = 0; char_array[i] != '\0'; i++){

//         if (user_choice == 1){
//             char_array[i] = toupper(char_array[i]);
//         }
        
//         else if (user_choice == 2){
//             char_array[i] = tolower(char_array[i]);
//         }
//         else if(user_choice == 3){

//             if(islower(char_array[i])){
//                 char_array[i] = toupper(char_array[i]);
//             }
//             else if (isupper(char_array[i])) {
//                 char_array[i] = tolower(char_array[i]);
//         }
//     }
// }

//     printf("\nThe result is: %s", char_array);

// }


// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main (void){

//     int concount = 0;
//     int vowcount = 0;

//     char char_array[100];

//     printf("Enter a string: ");
//     fgets(char_array, sizeof(char_array), stdin);
//     char_array[strcspn(char_array, "\n")] = '\0';

//     for (int i = 0; char_array[i] != '\0'; i++){

//         char ch = tolower(char_array[i]);

//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u'){
//             vowcount++;
//         } 
//         else{
//             concount++;
//         }
        
//     }

//     printf("Vowels: %d\n", vowcount);
//     printf("Consonants: %d\n", concount);

// 

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main(void) {
//     char char_array[100];

//     printf("Input a string: ");
//     fgets(char_array, 100, stdin);
//     char_array[strcspn(char_array, "\n")] = '\0';
    

//     for (int i = 0; char_array[i] != '\0'; i++) {
//         if (islower(char_array[i])) {
//             char_array[i] = toupper(char_array[i]);
//         }
//         else if (isupper(char_array[i])) {
//             char_array[i] = tolower(char_array[i]);
//         }
//     }

//     printf("%s\n", char_array);

//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int main (void){
//     int VowelCount = 0;   
//     int ConsonantCount = 0;  

//     char character_array[100];

//     printf("Enter a string: ");
//     fgets(character_array, sizeof(character_array), stdin);
//     character_array[strcspn(character_array, "\n")] = '\0';

//     for (int i = 0; character_array[i] != '\0'; i++) {
//         char ch = tolower(character_array[i]); 

        
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             VowelCount++;   // Vowel
//         } else {
//             ConsonantCount++;  // Consonant
//         }
        
//     }

//     printf("Vowels: %d\n", VowelCount);
//     printf("Consonants: %d\n", ConsonantCount);
// }


