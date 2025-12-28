// Write a program to count the number of vowels and consonants in a given string.

#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main(void) {
    int VowelCount = 0;   // Vowel count
    int ConsonantCount = 0;  // Consonant count

    char character_array[100];

    printf("Enter a string: ");
    fgets(character_array, sizeof(character_array), stdin);
    character_array[strcspn(character_array, "\n")] = '\0';

    for (int i = 0; character_array[i] != '\0'; i++) {
        char ch = tolower(character_array[i]); // Convert to lowercase because user can input any

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            VowelCount++;   // Vowel
        } else {
            ConsonantCount++;  // Consonant
        }
        
    }

    printf("Vowels: %d\n", VowelCount);
    printf("Consonants: %d\n", ConsonantCount);

    return 0;
}
