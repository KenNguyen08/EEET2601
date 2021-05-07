#include <stdio.h>
#include <string.h>

int main () {
    // Input a string
    char s[100];
    printf("Please enter a string: ");
    scanf("%[^\n]s", s);

    // Reverse the string
    int len = strlen(s);
    int middle = len / 2;
    int tmp;
    for (int i = 0; i < middle; i++) {
        if (s[i] != s[len - i - 1]) {
            printf("The string %s is not a palindrome\n", s);
            return 0;
        } 
    }
    printf("the string %s is a palindrome \n", s);

    return  0;
}
