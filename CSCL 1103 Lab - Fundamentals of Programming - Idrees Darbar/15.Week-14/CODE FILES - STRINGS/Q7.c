// Write a program to find the length of string.

#include <stdio.h>
#include <string.h>

int main (void){

    char character_array[100];

    printf("Enter a string: ");
    fgets(character_array, sizeof(character_array), stdin);
    character_array[strcspn(character_array, "\n")] = '\0';

    int size = strlen(character_array);

    printf("The length is: %d\n", size);

}