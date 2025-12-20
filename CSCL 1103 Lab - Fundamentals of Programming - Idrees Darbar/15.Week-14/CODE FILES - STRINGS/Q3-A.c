// Write a program to copy one string to another string with and without using string handling function.

#include <stdio.h>
#include <string.h>

int main (void){

    char character_array1[100] = "Hello";
    char character_array2[100];

    strcpy(character_array2, character_array1);

    printf("%s", character_array2);

    
}