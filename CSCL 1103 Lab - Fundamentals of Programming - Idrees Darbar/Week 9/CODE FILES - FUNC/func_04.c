#include <stdio.h>

// FUNCTION TO FIND MAX VALUE
int findmax(int arr[], int size) {
    int max = arr[0];   // assume first element is max

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {

    int N = 0;
    int numarray[1000];
    int num;

    printf("Enter numbers (enter -1 to stop):\n");

    while (1) {
        printf("Enter your number:\n");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        numarray[N] = num;   // store number
        N++;                 // increase size
    }

    int maximum = findmax(numarray, N);

    printf("\nThe maximum value is: %d\n", maximum);

    return 0;
}