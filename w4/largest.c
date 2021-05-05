#include <stdio.h>

int main() {
    // Array of marks
    int marks[] = {6, 2, 8, 9, 5};

    // Find the largest element of the array
    int largest = marks[0];
    for (int i = 1; i < 5; i++) {
        if (largest < marks[i]) {
            largest = marks[i];
        }
    }

    // Output the largest element
    printf("The largest element is %d\n", largest);

    return 0;
}