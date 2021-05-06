#include <stdio.h>

int sumOfDigit(int inputInteger);

int main()
{

    printf("%d",sumOfDigit(123));
    return 0;
}

int sumOfDigit(int inputInteger)
{
    if(inputInteger == 0)
    {
        return 0;
    }
    else
    {
        return inputInteger%10+sumOfDigit(inputInteger/10);    
    }

    
}