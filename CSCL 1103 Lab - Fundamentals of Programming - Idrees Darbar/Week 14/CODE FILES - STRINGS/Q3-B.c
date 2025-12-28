// Write a program to copy one string to another string with and without using string handling function.

#include <stdio.h>
#include <string.h>

int main (void){

    char character_array1[100] = "Hello";
    char character_array2[100];

    int i;
    
    for (i = 0; character_array1[i] != '\0'; i++){

        character_array2[i] = character_array1[i];
        
    }

    character_array2[i] = '\0'; // place null char at the end of the array after for-loop ends


    printf("%s", character_array2); // array2 is where the string is copied

}