#include <stdio.h>

int main() {
    int count = 0;

    // Print all characters from '!' to '~'
    for (int ch = 33; ch <= 126; ch++) {
        // Jump to a newline when 15 characters printed
        if (count == 15) {
            printf("\n");
            count = 0;
        }

        // Print a character
        printf("%c ", ch);
        count++;
    }
    printf("\n");

    return 0;
}