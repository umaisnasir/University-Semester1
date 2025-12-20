// fig04_01.c
// Counter-controlled iteration.
#include <stdio.h>

int main(void) {
   int counter = 1;    // initialization - the initial value of counter is 1, so the counting starts from 1 all the way until 5.

   while (counter <= 5) {    // iteration condition - Loop ends when the condition becomes true.
      printf("%d  ", counter);    // spacing done intentionally.
      counter = counter + 1;    // increment until 5 comes.
   }

   puts("");    // move to a new line after printing all numbers.
}