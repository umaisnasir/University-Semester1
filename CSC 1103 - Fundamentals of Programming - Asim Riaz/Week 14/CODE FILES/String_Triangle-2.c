#include <stdio.h>
#include <string.h>

int main(void) {
    
    char character_source[] = "This is the best way to waste time";
    char character_destination[100];

    for (int i = 0; character_source[i] != '\0'; i++){  // iterate through the array
        
        if (character_source[i] == ' ' || character_source[i + 1] == '\0'){  // if space is encountered
            strncpy(character_destination, character_source, i + 1);  // When i = 3 (at 's' in "This"), we want to copy 4 characters ('T', 'h', 'i', 's').
                                                                      // this is why we did i + 1 because indexing starts at 0.

                character_destination[i + 1] = '\0'; // manually ending the string as after that it will move to the next iteration.
                printf("%s\n", character_destination);
            
        }
    }

// line 11 : i + 1 bcs null char appears "AFTER" the last visible index
}