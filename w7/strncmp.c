#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char stringa[] = "I'm Karry";
    char stringb[] = "I'm Ken";

    // int result = strcmp(stringb, stringa);
    int result = strncmp (stringa, stringb, 6);

    printf("Result %d", result);


    return 0;
}