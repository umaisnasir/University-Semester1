// fig04_02.c
// Counter-controlled iteration with the for statement.
#include <stdio.h>

int main(void) {    
   
   for (int counter = 1; counter <= 5; ++counter) {    // FOR LOOP = (int counter = 1; counter <= 5; ++counter)
                                                       //              --------------  -------------  ---------
                                                       //                     |                |           |
                                                       //           (counter start position)   |           |
                                                       //                           (counter end position) |
                                                       //                                              (increment)

      printf("%d  ", counter);    // print the counter                          
   }

   puts(""); // outputs a newline
}
