#include <stdio.h>

int main(int argc, char const *argv[]) {
    printf("argc is %d\n", argc);
    for (int i = 1; i < argc; i++) {
        printf("Hello %s!\n", argv[i]);
    }
    return 0;
}