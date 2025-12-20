#include <stdio.h>
#include <string.h>

int main(void) {
    int VowelCount = 0;
    int ConsonantCount = 0;
    char character_array[100];

    printf("Enter a string: ");
    fgets(character_array, sizeof(character_array), stdin);

    // Remove newline character
    character_array[strcspn(character_array, "\n")] = '\0';

    for (int i = 0; character_array[i] != '\0'; i++) {
        char ch = character_array[i];

        // Convert uppercase to lowercase using ASCII
        if (ch >= 65 && ch <= 90) {
            ch = ch + 32;
        }

        // Check for vowels using ASCII values
        if (ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117) {
            VowelCount++;
        } else {
            ConsonantCount++;
        }
       
    }

    printf("Vowels: %d\n", VowelCount);
    printf("Consonants: %d\n", ConsonantCount);

    return 0;
}
