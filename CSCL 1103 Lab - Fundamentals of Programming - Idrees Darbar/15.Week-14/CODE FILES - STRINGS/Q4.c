// Write a program to concatenate two strings.

#include <stdio.h>
#include<string.h>

int main (void){

    char character_array[100];

    printf("Enter the first string: ");
    fgets(character_array, sizeof(character_array), stdin);
    character_array[strcspn(character_array, "\n")] = '\0';

    char character_array2[100];

    printf("Enter the second string: ");
    fgets(character_array2, sizeof(character_array2), stdin);
    character_array2[strcspn(character_array2, "\n")] = '\0';

    strcat(character_array, character_array2);

    printf("Concatenated string: %s\n", character_array);

}