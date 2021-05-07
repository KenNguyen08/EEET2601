#include <stdio.h>

int intpow(int base, int exponent);

int main()
{
    int exponent = 0;
    int base = 0;
    while(exponent <= 0)
    {
        printf("Enter base and Exponent: ");
        scanf("%d %d", &base, &exponent);
        printf("result is: %d",intpow(base,exponent));
    }



    return 0;
}

int intpow(int base, int exponent)
{   
    int result = base;
    for(int i = 1; i < exponent; i++)
    {
       result *= base;
    }
    return result;
}