// The radius of a circle is input through the keyboard. Write a program to calculate the area &
// circumference of the circle.

#include <stdio.h>

int main (void){

    float radius,area,circumference;

    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    printf("The area of the Circle is: %f\n", area);

    circumference = 2 * 3.14159 * radius;
    printf("The circumference of the Circle is: %f\n", circumference);

    return 0;



}