#include <stdio.h>

int main(void) {
    // Input an integer
    printf("Enter an integer: ");
    int num;
    scanf("%d", &num);

    // Output if num is even or odd
    if (num % 2 == 0) {		
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}
