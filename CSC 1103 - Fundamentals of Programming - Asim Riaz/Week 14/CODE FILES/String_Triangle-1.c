#include <stdio.h>

int main(void) {
    
    char character_array[] = "This is the best way to waste time ";

    int index = 0;

    while(character_array[index] != '\0'){  // loop through the whole array

        if (character_array[index] == 32){  // if space is reached

            for (int x = 0; x < index; x++){  // iterate until the current index value
                printf("%c", character_array[x]); // print char by char
            }

            printf("\n");
        }
        index++;
    }
    return 0;
}