#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    // Get the string
    char s[1000];
    printf("Enter your string: ");
    scanf("%[^\n]s", s);
    
    int counter = 0; // Counting whitespaces between words

    // Loop through each character in strin
    for (int i = 0; i < strlen(s) - 1; i++) {
        if (isspace(s[i]) && !isspace(s[i + 1])) {
            counter++;
        }
    }

    // Reduce counter by one if there is a space at the beginning
    if (isspace((s[0]))) {
        counter--;
    }

    // space counter + 1 equals word counter
    printf("%d words\n", counter + 1);
}