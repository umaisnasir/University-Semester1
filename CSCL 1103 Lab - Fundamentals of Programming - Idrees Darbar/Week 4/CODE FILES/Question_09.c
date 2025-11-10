// Write a C program that takes a person's height (in meters) and weight (in kilograms) as input 
// and uses if-else statements to calculate and print their BMI (Body Mass Index) category based 
// on the following categories:

//  ● Underweight: BMI < 18.5
//  ● Normal Weight: 18.5 <= BMI < 25
//  ● Overweight: 25 <= BMI < 30
//  ● Obese: BMI >= 30


#include <stdio.h>

int main (void){

    float person_height;
    float person_weight;
    float BMI;

    printf("Enter your height(in meters): ");
    scanf("%f", &person_height);

    printf("Enter your weight(in kilograms): ");
    scanf("%f", &person_weight);

    BMI = person_weight / (person_height * person_height);    // formula for BMI

    printf("Your BMI is: %f\n", BMI);    // You can print the BMI formula

    if (BMI < 18.5){
        printf("You are UnderWeight!");
    }
    else if (BMI >= 18.5 && BMI < 25){    // Broken down the combined inequality
        printf("You have a normal weight!");
    }
    else if (BMI >= 25 && BMI < 30){
        printf("You are OverWeight!");
    }
    else{
        printf("You are Obese!");
    }

    return 0;

}