#include <stdio.h>

int main() {
    int lineCount;
    int starCount = 5;
    int increment = 1;
    int spaceCount = starCount - 1;

    for (lineCount = 1; lineCount <= 9; lineCount++) {

        for (int position = 1; position <= starCount; position++) {
            
            if (spaceCount >= position) {
                printf("-");
            } else {
                printf("*");
            }
        }

        printf("\n");

        // When the number of stars reaches 9, start decreasing
        if (starCount == 9) {
            increment = -1;
        }

        
        starCount = starCount + increment;

        
        spaceCount = spaceCount - increment;
    }

    return 0;
}