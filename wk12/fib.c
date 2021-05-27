#include <stdio.h>

unsigned int fib(unsigned int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    printf("fib(5) is %d\n", fib(10));
    return 0;
}