// Write a C program that takes a numeric input for a month (1 to 12) and uses a switch-case statement to
// determine the season (e.g., spring, summer, fall, or winter) associated with that month.

#include <stdio.h>

int main() {
    int month;
    
    
    printf("Enter a month (1-12): ");
    scanf("%d", &month);

   
    switch (month) {    // fall-through method where a certain number of case-statements corresponds to a single answer.
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Spring\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("Summer\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("Fall\n");
            break;
        default:
            printf("Invalid month!\n");
            break;
    }

    return 0;
}
