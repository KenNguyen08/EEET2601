#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    // Declaring variables
    int grades[20], i, j, memory ,small = 100 , second = 100;

    // Intializes random number generator
    srand(time(0));

    // Filling out the array and printing
    printf("--------------------PROGRAM BEGIN---------------------\n");
    printf("These are all 20 grades:\n");
    for (i = 0; i < 20; i++) {
        grades[i] = rand() % 101;
        printf("%4d", grades[i]);
        if (i == 9) {
            printf("\n");
        }
    }
    printf("\n");

    // Printing grades between 50 and 69 inclusively
    printf("These are the grades between 50 and 69 inclusively:\n");
    for (i = 0; i < 20; i++ ) {
        if (grades[i] >= 50 && grades[i] <= 69) {
            printf("%4d", grades[i]);
            j += 1;
        }
    }
    printf("\nThere are %d grades between 50 and 69 inclusively\n", j);

    //Finding the smallest grade and removing it
    for (i = 0; i < 20; i++ ) {
        if (grades[i] < small ) {
            small = grades[i];
            memory = i;
        }
    }
    grades[memory] = 100;

    //Finding the 2nd smallest grade and re-entering the smallest grade
    for (i = 0; i < 20; i++ ) {
        if (grades[i] < second ) {
            second = grades[i];
        }
    }
    grades[memory] = small;
    printf("The 2nd smallest grade is: %4d\n", second);
    printf("--------------------PROGRAM ENDED---------------------\n");
    return 0;
}