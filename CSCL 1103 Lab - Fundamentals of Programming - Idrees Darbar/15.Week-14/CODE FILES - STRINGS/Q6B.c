// Write a program that converts all lowercase characters in a given string to its equivalent uppercase
// character.

// or

// Write a program to convert all uppercase characters to lowercase and all lowercase characters to uppercase
// in a given string.

// Using BI Functions

#include <stdio.h>
#include <ctype.h>

int main (void){

    char character_array[100];
    int user_choice;

    printf("Enter a string: ");
    fgets(character_array, sizeof(character_array), stdin);

    printf("\nChoose an option:\n");
    printf("1. Lowercase to Uppercase\n");
    printf("2. Uppercase to Lowercase\n");
    printf("3. Toggle Case\n");
    printf("Enter your choice: ");
    scanf("%d", &user_choice);

    for (int i = 0; character_array[i] != '\0'; i++){

        if (user_choice == 1){

            character_array[i] = toupper(character_array[i]);

        }

        else if(user_choice == 2){

            character_array[i] = tolower(character_array[i]);
        }

        else if(user_choice == 3){

            if (islower(character_array[i])) {
                character_array[i] = toupper(character_array[i]);
            }
            else if (isupper(character_array[i])) {
                character_array[i] = tolower(character_array[i]);
            }
        }
    }

    printf("\nThe result is: %s", character_array);
}