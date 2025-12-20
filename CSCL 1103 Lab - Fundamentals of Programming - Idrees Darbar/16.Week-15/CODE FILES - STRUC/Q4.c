// Nested Structures:

// Create a structure Date with members for day, month, and year.
// Define another structure Event with members for event name and the date of the event.
// Create an array of structures to store information for three events.

// Print the details of each event.

#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Event{
    char event_name[50];
    struct Date date;
};

int main (void){

    struct Event struc_array[3];

    printf("----Enter Details About Three Events----");
    printf("\n");

    for (int i = 0; i < 3; i++){

        printf("Enter the name of the event: ");
        scanf("%s", struc_array[i].event_name);

        printf("Enter the day: ");
        scanf("%d", &struc_array[i].date.day);

        printf("Enter the month: ");
        scanf("%d", &struc_array[i].date.month);

        printf("Enter the year: ");
        scanf("%d", &struc_array[i].date.year);

        printf("\n");

    }
    printf("HERE ARE THE DETAILS OF THE EVENT:");

    for (int j = 0; j < 3; j++){
        

        printf("\nEvent name: %s\n", struc_array[j].event_name);

        printf("Date: ");
        printf("%02d/%02d/%d",struc_array[j].date.day, struc_array[j].date.month, struc_array[j].date.year);
        printf("\n");
    }

    return 0;
}

