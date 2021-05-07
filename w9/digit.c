#include <stdio.h>

int posint() {
    int num;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    } while (num <= 0);
    return num;
}

void printdigits(int i){
    if (i < 10) {
        printf("%d ", i);
    } else {
        printdigits(i / 10);
        printf("%d ", i % 10);
    }   
}

void formatprintdigits(int num) {
    printdigits(num);
    printf("\n"); 
}

int main() {
    int num = posint();
    formatprintdigits(num);
    return 0;
}