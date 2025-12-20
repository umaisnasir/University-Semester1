#include<stdio.h>
#include<string.h>

int main (void){

    struct employee{
        char name[50];
        int id;
        float salary;
    };

    struct students{
        char firstName[100];
        char lastName[100];
        int age;
        float cgpa;
    };

    struct students s1;
    struct students s2;

    strcpy(s1.firstName,"Muhammad");
    strcpy(s1.lastName, "Umais");
    s1.cgpa = 3.44;
    s1.age = 23;

    printf("*************** STUDENT DETAILS*************** ");

    printf("\n%s", s1.firstName);
    printf("%s\n", s1.lastName);
    printf("%d\n", s1.age);
    printf("%f\n", s1.cgpa);

}