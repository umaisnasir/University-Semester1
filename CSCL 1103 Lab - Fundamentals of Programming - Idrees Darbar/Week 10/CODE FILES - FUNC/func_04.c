// Write a C program with a function findMax that finds and returns the maximum value in an array
// of integers. In the main function, take an array of integers as input, call the findMax function, and
// print the maximum value.


#include <stdio.h>

int findMax(int arr[], int size){
    
    int max = arr[0];
    
    for (int i = 1; i < size; i++){
        if (arr[i] > max){
            max=arr[i];
        }
        
    }
    
    return max;
    
}

int main (void){
    
    int index;
    
    int ReturnedValue;
    
    printf("Enter the size of the array: ");
    scanf("%d", &index);
    
    int Array[index];
    
    for (int i = 0; i < index; i++){
        
        printf("Enter the number: ");
        scanf("%d", &Array[i]);
        
    }
    
    ReturnedValue = findMax(Array, index);
    printf("The maxmimum value is: %d\n", ReturnedValue);
    
    return 0;
}