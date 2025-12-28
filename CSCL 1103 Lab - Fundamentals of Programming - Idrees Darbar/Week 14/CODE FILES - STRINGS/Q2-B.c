// Write a program to read a sentence and count the number of characters & words in that sentence.

// user-input based

#include<stdio.h>

int main(void) {

    char character_array[100];
    int characters = 0;
    int words = 1 ;

    printf("Enter the string: ");
    fgets(character_array, 100, stdin);
    
    for (int i = 0; character_array[i] != '\0'; i++) {

        characters++; //  // counts each character in the string (including spaces)
                      // 0th iteration : 1st character is over there.

        if (character_array[i] == ' ') {  // if empty-space?
            words++;  
        }
    }

    printf("The char is: %d\n", characters);
    printf("The words are: %d\n", words);
    return 0;

}