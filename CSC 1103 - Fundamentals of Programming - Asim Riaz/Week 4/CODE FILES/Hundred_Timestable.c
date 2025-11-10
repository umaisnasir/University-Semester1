#include <stdio.h>

int main() {
    
    int num, t;

    // Heading
    printf("Tables from 1 to 10:\n\n");

    // Outer loop: iterates through the numbers whose tables we want (1 to 100) - AFTER ONE CYCLE 1-10 THE OUTER LOOP PRINTS ANOTHER TABLE
    for(num = 1; num <= 100; num++) {
        // Inner loop: iterates through the multiplier (1 to 10) - FOR EACH TABLE
        for(t = 1; t <= 10; t++) {
            
            
            printf("%2d x %2d = %3d  ", num, t, num * t); // 2d,3d are just for cleaner formatting, it adds placeholders.
            
        }
        // New Line is printed after an entire table - horizontal (out of first loop)
        printf("\n");
    }

    return 0;
}

// Why horizontal?

//Because this printf is inside the inner loop (for(t = 1; t <= 10; t++)).

//That means it keeps printing on the same line for every value of t (1 → 10).

//There is no newline (\n) inside this inner loop, so all 10 results for one table stay on the same row.
