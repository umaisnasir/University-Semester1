// Write a C program that takes a numeric input for a month (1 to 12) and uses a switch-case statement to
// determine the season (e.g., spring, summer, fall, or winter) associated with that month.

// #include <stdio.h>

// int main() {
//     int month;
    
    
//     printf("Enter a month (1-12): ");
//     scanf("%d", &month);

   
//     switch (month) {    // fall-through method where a certain number of case-statements corresponds to a single answer.
//         case 12:
//         case 1:
//         case 2:
//             printf("Winter\n");
//             break;
//         case 3:
//         case 4:
//         case 5:
//             printf("Spring\n");
//             break;
//         case 6:
//         case 7:
//         case 8:
//             printf("Summer\n");
//             break;
//         case 9:
//         case 10:
//         case 11:
//             printf("Fall\n");
//             break;
//         default:
//             printf("Invalid month!\n");
//             break;
//     }

//     return 0;
// }

#include <stdio.h>

int main() {
    int month, month_group;
    
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    
    
    if (month >= 1 && month <= 12) {
        month_group = (month - 1) / 3 + 1;
    } else {
        month_group = 0; 
    }
    
    switch (month_group) {
        case 1:
            printf("Winter Season: January-March\n");
            break;
        case 2:
            printf("Spring Season: April-June\n");
            break;
        case 3:
            printf("Summer Season: July-September\n");
            break;
        case 4:
            printf("Autumn Season: October-December\n");
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
    
    return 0;
}

/* Month 1: (1-1)/3 + 1 = 0/3 + 1 = 0 + 1 = 1 ✓
   Month 2: (2-1)/3 + 1 = 1/3 + 1 = 0 + 1 = 1 ✓
   Month 3: (3-1)/3 + 1 = 2/3 + 1 = 0 + 1 = 1 ✓

Spring (Group 2):

Month 4: (4-1)/3 + 1 = 3/3 + 1 = 1 + 1 = 2 ✓
Month 5: (5-1)/3 + 1 = 4/3 + 1 = 1 + 1 = 2 ✓
Month 6: (6-1)/3 + 1 = 5/3 + 1 = 1 + 1 = 2 ✓ */