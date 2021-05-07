#include <stdio.h>

int main()
{
    char s[20] = {'\0'};
    char *p = s;
    int i = 1;

    *p = 1 + '2';
    printf("string  is: %s", p);

    return 0;
}