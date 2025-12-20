// Write a program to read a sentence and count the number of characters & words in that sentence.

// Hard-Coded

#include <stdio.h>

int main(void) {

    char array1[] = "A quick brown fox";
    int characters = 0;
    int words = 1;   // sentence has at least one word

    for (int i = 0; array1[i] != '\0'; i++) {

        characters++; // counts each character in the string (including spaces)
                      // 0th iteration : 1st character is over there.

        if (array1[i] == ' ') {  // if empty-space?
            words++;  
        }
    }

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);

    return 0;
}
