//  Create a program that uses a do-while loop to print odd numbers from 1 to 19

#include <stdio.h>

int main (void){

    int odd_count = 1;

    do{
        
        printf("The odd count is: %d\n", odd_count);
        odd_count += 2;

    } while (odd_count < 20);
    
return 0;    
}


