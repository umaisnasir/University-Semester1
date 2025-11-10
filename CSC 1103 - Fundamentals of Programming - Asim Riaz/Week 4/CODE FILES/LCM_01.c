#include <stdio.h>

int main(void) {

    int user_input, div = 2;    // div = 2 because we have to divide user input by 2

    printf("Enter any number : ");
    scanf("%d", &user_input);

    while (user_input != 1)    // loop ends when last division result of LCM is 1
    {
        if (user_input % div == 0){    // if fully divisible by 2
            user_input = user_input / div;    // perform divison by 2
            printf("%d ", user_input);
        }
        else{
            div = div + 1;    // else keep on jumping to the next dividend until the user input is fully divisible by 2
        }
    }
    
    return 0;

}