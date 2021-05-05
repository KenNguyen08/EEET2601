#include <stdio.h>

int main() {
    int input = 0, count = 0, sum = 0;

    // Keep looping until the input is negative  
    while (5) {
        // Get a positive integer
        printf("Enter positive integer: ");
        scanf("%d", &input);

        // Calculate sum and the number of positive integers
        // Assume that 0 is a positive integer
        if (input >= 0) {
            count++;
            sum += input;
        } else {
            break;
        }
    }

    // Print out the results
    printf("Sum is %d\nNumbers of positive inputs: %d\n", sum, count);

    return 0;

}