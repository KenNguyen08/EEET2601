#include <stdio.h>

int main() {
    // Input array size
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    // Create array with that size
    int marks[size];

    // Input array elements
    for (int i = 0; i < size; i++) {
        printf("Enter marks[%d]: ", i);
        scanf("%d", &marks[i]);
    }
    
    // Compute average mark
    float sum = 0;
    for (int i = 1; i < size + 2; i++) {
        sum += marks[i];
    }  
    float avg = sum / size;

    // Output average mark
    printf("The average mark is %f\n", avg);

    return 0;
}