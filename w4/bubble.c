#include <stdio.h>

int main() {
    // Array of marks
    int marks[] = {6, 2, 8, 9, 5};

    // Bubble sort
    int size = 5, tmp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (marks[j] > marks[j + 1]) {
                tmp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = tmp;
            }
        }
    }

    // Output array
    for (int i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}