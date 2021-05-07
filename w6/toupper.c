#include <stdio.h>

int main() {
    // Input a string
    const int SIZE = 100;
    char s[SIZE];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);

    // Convert the string to uppercase
    for (char *p = s; *p != '\0'; p++) {
        if ('a' <= *p && *p <= 'z') {
            *p -= 'a' - 'A';
        }
    }

    // Output the string
    printf("After conversion: %s\n", s);

    return 0;
}