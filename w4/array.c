#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Create an array of 10 random integers between 50 and 100 inclusively.
    const int SIZE = 10; 
    int num[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++) {
        num[i] = rand() % 51 + 50;
    }

    // Print the first to the last element of the array in one line.
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", num[i]);
    }
    printf("\n");

    // Print the last to the first element of the array in one line.
    for (int i = SIZE - 1; i >= 0; i--) {
        printf("%d\t", num[i]);
    }
    printf("\n");

    // How many elements greater than 80 are there in the array? Print them out in one line.
    int count = 0;
    for (int i = 0; i < SIZE; i++) {
        if (num[i] > 80) {
            printf("%d\t", num[i]);
            count++;
        }
    }
    printf("\n");
    printf("There are %d elements greater than 80\n", count);

    // What is the smallest element in the array?
    int min = num[0];
    for (int i = 1; i < SIZE; i++) {
        if (num[i] < min) {
            min = num[i];
        }
    }
    printf("The smallest element is %d\n", min);

    // Sort the array in ascending order using the bubble sort algorithm 
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE - i - 1; j++){
            if (num[j] > num[j + 1]){
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    
    // Print array
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t", num[i]);
    }
    printf("\n");

    return 0;
}