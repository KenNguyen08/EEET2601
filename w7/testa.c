#include <string.h>
#include <stdio.h>

int main() {
int a = 0, b = 0;
int *pa, *pb;
a = 10;
a = b;
pa = &a;
pb = pa;
*&a = 20;
    printf("%d", a );

    return 0;
}