#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    // Input a string
    char s[100];
    printf("Please enter a string: ");
    scanf("%[^\n]s", s);
    char s2[100];
    //eliminate puctuation and whitespaces
    int j = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if((s[i] >=48 && s[i]<=57) || (s[i]>=65 && s[i] <=90) || (s[i]>=97&&s[i]<=122))
        {
            s2[j] = s[i];
            j++;
        }
    }

    int len = strlen(s2);
    int middle = len / 2;
    int tmp;
    //convert string to lower case
    for(int i = 0; i < len; i++)
    {
        s2[i] = tolower(s2[i]);
    }
    // Reverse the string



    for (int i = 0; i < middle; i++) {
        if (s2[i] != s2[len - i - 1]) {
            printf("The string %s is not a palindrome\n", s2);
            return 0;
        } 
    }
    printf("the string %s is a palindrome \n", s2);

    return  0;
}
