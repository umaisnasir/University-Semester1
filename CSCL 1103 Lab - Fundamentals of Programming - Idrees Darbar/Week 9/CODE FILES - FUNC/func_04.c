// Example program of recursion.

#include <stdio.h>

void recursion(int x) {
    int y = x * 2;
    printf("%d\n", y);

    if (y < 10000) {
        recursion(y);
    }
}

int main(void) {
    recursion(4);
    return 0;
}
