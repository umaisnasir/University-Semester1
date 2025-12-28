// #include <stdio.h>

// int square (int userinput){
//     return userinput*userinput;
// }


// int main (void){

//     int userinp;
//     int retval;

//     for (int i = 0; i < 10; i++){

//         printf("%d\n", square(i));
    
//     }
    

//     puts(" ");
// }


// #include<stdio.h>

// int max(int x, int y, int z){

//     if (x>y && x>z){
//         return x;
//     }
//     else if(y>x && y>z){
//         return y;
//     }
//     else if(z>x && z>y){
//         return z;
//     }
//     else{
//         printf("Enter a correct input");
//     }
// }

// int main (void){

//     int x,y,z;

//     printf("Enter a number: ");
//     scanf("%d%d%d", &x,&y,&z);
    
//     printf("The max is: %d", max(x,y,z));

// }


// #include <stdio.h>
// #include <stdlib.h>

// int main (void){

//    int frequency1 = 0; // rolled 1 counter
//    int frequency2 = 0; // rolled 2 counter
//    int frequency3 = 0; // rolled 3 counter
//    int frequency4 = 0; // rolled 4 counter
//    int frequency5 = 0; // rolled 5 counter
//    int frequency6 = 0; // rolled 6 counter

//    for (int roll = 0; roll <= 60000000; roll++){

//     int face = 1 + rand() % 6;

   

//    switch (face){
//     case 1:
//     ++frequency1;
//     break;

//     case 2:
//     ++frequency2;
//     break;

//     case 3:
//     ++frequency3;
//     break;

//     case 4:
//     ++frequency4;
//     break;

//     case 5:
//     ++frequency5;
//     break;

//     case 6:
//     ++frequency6;
//     break;
//     }

//    }

//    printf("%s%13s\n", "Face", "Frequency");
//    printf("   1%13d\n", frequency1);
//    printf("   2%13d\n", frequency2);
//    printf("   3%13d\n", frequency3);
//    printf("   4%13d\n", frequency4);
//    printf("   5%13d\n", frequency5);
//    printf("   6%13d\n", frequency6);
// } 


// fig05_06.c
// Randomizing the die-rolling program.

// #include <stdio.h>
// #include <stdlib.h>

// int seed = 0;

// int main(void){

//     printf("Enter seed value: ");
//     scanf("%d", &seed);


//     srand(seed);

//     for (int i = 1; i <= 10; i++){
//         printf("%d ", 1 + (rand() % 6));
//     }

//     puts("");
// }


// #include <stdio.h>

// unsigned long long int factorial(int number){

//     if (number <= 1){
//         return 1;
//     }
//     else{
//         return (number * factorial(number - 1));
//     }

// }

// int main (void){

//     for (int i = 0; i <= 21; i++){
//         printf("%d! = %llu\n", i, factorial(i));
//     }
// }


// #include <stdio.h>

// int main (void){

//     int number_array[5];

//     for (int i = 0; i < 5; i++){

//         number_array[i] = i;

//     }

//     printf("%s%5s\n", "Element", "   Value");

//     for (int y = 0; y < 5; y++){

//         printf("%7d%8d\n", y, number_array[y]);

//     }
// }


// #include <stdio.h>

// int main(void){

//     int num_array[5] = {32,27,64,18,95};

//     printf("%s%8s\n", "Element", "Value");

//     for (int i = 0; i < 5; i++){
//         printf("%6d%8d\n", i, num_array[i]);
//     }
// }

// #include <stdio.h>

// int main(void) {
//    char array[5] = ""; 

//    printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
//       array, &array[0], &array);

//       // array ----- '%p'
//       // &array[0] ----- '%p'
//       // &array ------ '%p'

//       // all give the same output
// }

// fig07_06.c
// #include<ctype.h>
// #include<stdio.h>

// void convertToUppercase(char *pointer){
    
//     while (*pointer != '\0'){
//         *pointer = toupper(*pointer);
//         ++pointer;
//     }
// }

// int main(void){
//     char str[] = "UmAis NaSIR iS a STUDenT";

//     printf("The string before the comparison is: %s\n", str);

//     convertToUppercase(str);

//     printf("The string after conversion is: %s\n", str);

// }

// fig07_08.c

// #include <stdio.h>

// void print_characters(char *array_pointer){

//     while (*array_pointer != '\0'){
//         printf("%c", *array_pointer);
//         array_pointer++;
//     }
// }

// int main(void){

//     char string_array[] = "umais nasir is a good person";

//     printf("The string is:\n");
//     print_characters(string_array);
//     printf("\n");

// }

// #include <stdio.h>

// // xPtr cannot be used to modify the 
// // value of the variable to which it points
// void func(int *xPtr) {
//    *xPtr = 100; // error: cannot modify a const object
// } 

// // without const : modifies the value
// // with const : program throws error

// int main(void) {
//    int y = 7; 

//    func(&y); 

//    printf("value: %d", y);
// } 


// fig07_09.c
// Attempting to modify a constant pointer to non-constant data.
// #include <stdio.h>

// int main(void) {
//    int x = 0; 
//    int y = 0; 

//    // ptr is a constant pointer to an integer that can be modified  
//    // through ptr, but ptr always points to the same memory location
//    int * const ptr = &x;                                            

//    *ptr = 7; // allowed: (*ptr) is not const
//    ptr = &y; //error: (ptr) is const; cannot assign new address
// }


// fig07_10.c
// Attempting to modify a constant pointer to constant data.
// #include <stdio.h>

// int main(void) {
//    int x = 5;
//    int y = 0;

//    // ptr always points to the same location
//    // the integer at that location cannot be modified

//    const int *const ptr = &x; // initialization is OK

//    printf("%d\n", *ptr);

//    // memory location & contents @ that mem loc, both cannot be modified

//    *ptr = 7; // error: *ptr is const; cannot assign new value 
//    ptr = &y; // error: ptr is const; cannot assign new address

// }

