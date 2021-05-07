#include <stdio.h>

// Function declarations
int getint();
int iseven(int num);
void displaymessage(int num, int even);

int main() {
    int n = getint();
    int even = iseven(n);
    displaymessage(n, even);
    return 0;
}

// Function definitions
int getint() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}

int iseven(int num) {
    // if (num % 2 == 0) {
    //     return 1;
    // } else {
    //     return 0;
    // }

    return (num % 2 == 0)? 1 : 0;
}

void displaymessage(int num, int even) {
    if (even == 1) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
}