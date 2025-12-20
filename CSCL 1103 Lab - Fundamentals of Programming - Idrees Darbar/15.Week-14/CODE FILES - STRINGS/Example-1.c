// #include <stdio.h>

// int main(void) {

//     char Array[10];

//     scanf("%9s", Array);   // limit input to avoid overflow

//     printf("%s", Array);   // print the string

//     return 0;
// }



// #include <stdio.h>

// int main(void) {
//     char greeting[] = "Hello";

//     printf("%s\n", greeting);
// }



// #include <stdio.h>
// #include <string.h>

// int main(void) {
    
//     int length;

//     length = strlen("Muhammad Umais");

//     printf("%d", length);
// }



// #include <stdio.h>
// #include <string.h>

// int main (void){
//     char array[20];

//     strcpy(array, "Hello");

//     for (int i = 0; i<strlen(array); i++){
//         printf("%c", array[i]);
//     }
// }



// #include <stdio.h>
// #include <string.h>

// int main (void){
//     char array[20];

//     strncpy(array, "Hello", 3);  // copies "Hel"

//     for (int i = 0; i<strlen(array); i++){
//         printf("%c", array[i]);
//     }
// }



// #include <stdio.h>
// #include <string.h>

// int main (void){

//     int var;

//     var = strcmp("Hello", "World");

//     printf("%d", var);  //strcmp compares two strings lexicographically (character by character).
// }



// #include <stdio.h>

// int main(void) {
//     char name[20];

//     printf("Enter text: ");
//     scanf("%s", name);

//     printf("Stored value: %s\n", name);  // only prints before the whitespace
//     return 0;
// }



// #include <stdio.h>

// int main(void) {
//     char str[10];

//     printf("Enter text: ");
//     gets(str);   // unsafe

//     printf("Stored value: %s\n", str);  // Buffer Overflow : More data is written into memory than the space that was allocated for it.
//     return 0;
// }



// #include <stdio.h>

// int main(void) {
//     char sentence[50];

//     printf("Enter a sentence: ");
//     fgets(sentence, 50, stdin);
//  // fgets(buffer, size, stream);
//     puts(sentence);   // prints the entire line safely
//     return 0;
// }



// #include <stdio.h>

// int main(void) {
//     char str[] = "Computer";

//     printf("%c\n", str[0]);  // C
//     printf("%c\n", str[3]);  // p
//     printf("%c\n", str[7]);  // r

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int main(void) {
//     char s1[20] = "Hello ";
//     char s2[] = "World";

//     strcat(s1, s2);
// //  strcat(destination, source);

//     printf("%s\n", s1);
//     return 0;
// }
