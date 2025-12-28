// A number is taken as an input from the user. Check whether the number is a multiple of 3 or 7 or both (using || operator)

#include <stdio.h>

int main (void){

    int User_Input;

    printf("Enter a number: ");
    scanf("%d", &User_Input);

    if (User_Input % 3 == 0 || User_Input % 7 == 0){
        printf("The number %d is the multiple of 3 and 7\n", User_Input);
    }
    
    else{
        printf("The number %d is NOT a multiple of 3 or 7.\n", User_Input);
    }

    return 0;
    
}