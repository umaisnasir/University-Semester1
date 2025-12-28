#include<stdio.h>
#include<string.h>

int main (void){

    struct employee{
        char name[50];
        int id;
        float salary;
    };

    struct employee e1;
    struct employee e2;

    strcpy(e1.name,"Muhammad Umais");
    
    e1.id = 25000;
    e2.id = 28000;

    printf("*************** STUDENT DETAILS*************** ");


    printf("\n%s", e1.name);
    puts(" ");
    printf("%d\n", e1.id);
    printf("%f\n", e2.id);

}