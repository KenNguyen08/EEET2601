// Author: Quang Tran
#include <stdio.h>

// Function to calculate length of a positive integer
int intlen(int i) {
    int len = 0;
    while (i > 0) {
        len++;
        i /= 10;
    }
    return len;
}

// Function to convert an integer to a string
char *itos(int i, char *p) {
    if (i < 0) {
        *p = '-';
        itos(i * (-1), p + 1);
    } else if (i < 10) {                 
        *p = i + '0';   
    } else {
        *(p + intlen(i) - 1) = i % 10 + '0';    
        itos(i / 10, p);
    }
    return p;
}

int main() {
    int i;
    printf("Enter an integer: ");
    scanf("%d", &i);

    char s[20] = {'\0'};    // Assume that the integer has maximum 19 digits
    printf("s = %s\n", itos(i, s));

    return 0;



}

