#include <stdio.h>

int main() {
    // Declaring variables
    int check = 0, numin, i, j;

    // Obtaining user input and checking for range
    while (check == 0) {
        printf("Enter an integer between 1 and 10: ");
        scanf("%d", &numin);
        if (numin > 0 && numin < 11) {
            check = 1;
        }
    }

    // for (i = 1; i < numin + 1; i++) {
    //   printf("%3d", i);
    //   for (j = i - 1; j > 0; j-- ) {
    //     printf("%3d", j);
    //   }

    for(i = 0; i < numin ; i++)
    {


    }
    
    printf("\n");
    return 0;
}