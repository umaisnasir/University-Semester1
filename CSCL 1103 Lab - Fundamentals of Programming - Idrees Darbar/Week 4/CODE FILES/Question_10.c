// Develop a program that takes three integers as input, representing the angles of a triangle. Use 
// nested if-else statements to determine and print whether the triangle is valid (based on the 
// triangle inequality theorem) and what type it is (equilateral, isosceles, scalene, or right-angled).

#include <stdio.h>

int main(void) {
    float a, b, c, sum;

    printf("Enter the first angle: ");
    scanf("%f", &a);

    printf("Enter the second angle: ");
    scanf("%f", &b);

    printf("Enter the third angle: ");
    scanf("%f", &c);

    sum = a + b + c;    // sum of all sides = 180 

    if (sum == 180) {
        
        if (a == b && b == c) {    // all three angles should be equal
            printf("Equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) {    // two sides should be equal
            printf("Isosceles triangle\n");
        }
        else {
            printf("Scalene triangle\n");    // no angle is equal to any other angle
        }

        // Check if right-angled triangle
        if (a == 90 || b == 90 || c == 90) {
            printf("It is also a right-angled triangle\n");
        }
    }
    else {
        printf("Not a valid triangle (sum of angles != 180)\n");
    }

    return 0;
}
