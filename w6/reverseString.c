#include <stdio.h>
#include <string.h>
int main() {
    // Input a string
    const int SIZE = 100;
    char s[SIZE];
    printf("Enter a string: ");
    scanf("%[^\n]s", s);

    // REVERSE STRING 
    int middle = strlen(s)/2;
    int len = strlen(s);
    printf("\n%c", *(s+middle));
    int i = 0;
    for(char *p=s; p < s+middle; p++  )
    {
      char temp = *p;
      *p = *(s + len - i -1);
      *(s + len - i -1) = temp;  
      i++;
    }



    // Output the string
    printf("After conversion: %s\n", s);

    return 0;
}