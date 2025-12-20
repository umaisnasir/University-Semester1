// Sentinel-Controlled Loop

#include <stdio.h>

int main(void) {
    int number;
    int total = 0;

    printf("Enter a number (-1 to stop): ");
    scanf("%d", &number);

    while (number != -1) {      // -1 is the sentinel
        total += number;
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &number);
    }

    printf("Total is %d\n", total);
    return 0;
}
