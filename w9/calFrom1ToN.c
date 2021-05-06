#include<stdio.h>
int sumFrom1ToN(int inputInteger);

int main()
{

    printf("%d", sumFrom1ToN(4));

    return 0;
}

int sumFrom1ToN(int inputInteger)
{
    if(inputInteger == 0)
    {
        return 0;
    }
    else
    {
        return inputInteger + sumFrom1ToN(inputInteger - 1);
    }
}
