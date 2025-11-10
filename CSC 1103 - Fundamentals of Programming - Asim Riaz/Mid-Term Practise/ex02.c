// fig03_06.c
// Analysis of examination results

#include <stdio.h>

// Function main begins program execution
int main(void) {
    // Initialization phase
    int passes = 0;     // Number of students who passed
    int failures = 0;   // Number of students who failed
    int student = 1;    // Student counter
    int result = 0;     // One exam result

    // Process 10 students using a counter-controlled loop
    while (student <= 10) {
        // Prompt user for input and obtain value
        printf("Enter result (1 = pass, 2 = fail): ");
        scanf("%d", &result);

        // Determine if result is pass or fail
        if (result == 1) {
            passes++;    // Increment passes
        } else {
            failures++;  // Increment failures
        }

        student++;       // Increment student counter
    }

    // Termination phase: display number of passes and failures
    printf("Passed: %d\n", passes);
    printf("Failed: %d\n", failures);

    // If more than eight students passed, print bonus message
    if (passes > 8) {
        puts("Bonus to instructor!");
    }

    return 0; // Indicate successful program termination
}
