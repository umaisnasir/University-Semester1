// * Define a structure Student with members for name, roll number, and marks.
// * Create an array of structures to store information for five students.
// * Print the details of each student.

#include<stdio.h>

struct Student{
    char name[50];
    int roll_number;
    float marks;
};

int main (void){

    struct Student student_array[5];

    for (int i = 0; i < 5; i++){

        printf("Enter the student info above: \n");

        printf("Enter the name of the student: ");
        scanf("%s", student_array[i].name);

        printf("Enter the roll number of the student: ");
        scanf("%d", &student_array[i].roll_number);

        printf("Enter the marks of the student: ");
        scanf("%f", &student_array[i].marks);

    }

    puts(" ");

    for (int i = 0; i < 5; i++){

        printf("Name of the student: %s\n\n",student_array[i].name);

        printf("Roll Number of the student: %d\n\n",student_array[i].roll_number);

        printf("Marks of the student: %.2f\n\n",student_array[i].marks);
    }


}
