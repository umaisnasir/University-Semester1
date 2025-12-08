// #include <stdio.h>

// int main (void){
    
//     int num = 7;

//     int *ptr = &num;

//     printf("Address of num is: %p\nValue of ptr(which is also technically address is: %p\n)", &num, ptr);

//     printf("Value of a is: %d\nValue of *ptr is: %d\n", num, *ptr);

//     printf("Showing that * amd & are compliments of each other\n");

//     printf("&*ptr = %p\n*&ptr = &p\n", &*ptr, *&ptr);

//}




// #include <stdio.h>

// int cubeByValue(int n){
//     return n*n*n;
// }

// int main (void){

//     int number = 5;
//     printf("The original value of number is: %d", number);

//     int result = cubeByValue(number);

//     printf("\nThe new value of number is: %d\n", result);

// }


// #include <stdio.h>

// int CubeByReference(int *number){
//     *number = (*number) * (*number) * (*number);
// }

// int main (void){
    
//     int number = 5;

//     printf("The original value of number is: %d", number);

//     CubeByReference(&number);

//     printf("\nThe new value of number is %d\n", number);



// }

