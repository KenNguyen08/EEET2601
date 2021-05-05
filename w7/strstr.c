#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<string.h>

int main(void)
{
    char *stringa = "I'm Harry";
    
    char *result = strstr(stringa, "Hary");

    printf("result: %s", result);

    return 0;
}