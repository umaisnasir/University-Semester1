// Write a program to take string input from user by using scanf and gets and print on console using printf
// and puts.

#include <stdio.h>

int main(void) {

    char character_array[10], character_array2[10];

    printf("Enter a string (scanf): ");

    scanf("%s", character_array);
    printf("Using scanf: %s\n", character_array);

    getchar(); // to elim the whitespace (\n)

    printf("\nEnter a string (gets): ");
    gets(character_array2);

    printf("Using gets: ");
    puts(character_array2);

    return 0;
}