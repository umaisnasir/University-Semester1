#include <stdio.h>

int main (void){

    
    int temp_variable = 12345.67890123456789;

    float temp_variable2 = 12345.67890123456789; // provides single-precision floating-point representation, 
    //generally offering about 7 decimal digits of precision
    
    double temp_variable3 = 12345.67890123456789; // provides double-precision floating-point representation,
    //generally offering about 15-17 decimal digits of precision.



    printf("integer output is: %d\n", temp_variable);

    printf("float output is: %f\n", temp_variable2); 

    printf("double output is: %lf\n", temp_variable3);

    printf("...........................................................\n"); // ignore this line

    printf("float output is: %.2f\n", temp_variable3); // The .2 part in %.2f does not “remove zeros”, it controls how many digits are 
    //shown after the decimal point — i.e. it rounds the number to 2 decimal places when printing.
}