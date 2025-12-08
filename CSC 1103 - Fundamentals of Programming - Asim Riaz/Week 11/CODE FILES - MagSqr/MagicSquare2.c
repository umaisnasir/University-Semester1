#include<stdio.h>

int main() {
    int num;
    
    printf("Enter any Doubly EVEN # (like 4,8,12): ");
    scanf("%d", &num);

    int magicsquare[num*num];

    // Fill sequential numbers
    for (int i = 0; i < num*num; i++)
        magicsquare[i] = i + 1;

    // Doubly even magic square inversion
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {

            int index = i * num + j;

            // Check if cell belongs to the pattern to invert
            if ((i % 4 == j % 4) || ((i % 4 + j % 4) == 3)) {
                magicsquare[index] = num*num + 1 - magicsquare[index];
            }
        }
    }

    // Display
    for (int i = 0; i < num*num; i++) {
        printf("%3d ", magicsquare[i]);
        if ((i+1) % num == 0) printf("\n");
    }
}
