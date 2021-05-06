#include <stdio.h>
#include <math.h>
char * converIntToString(int inputInteger);
int getInteger();

int main()
{   

    getInteger();

    

    return 0;
}

int getInteger()
{
    int inputInteger;
    printf("Enter an integer: ");
    scanf("%d", &inputInteger);
    return inputInteger;
}

char * converIntToString(int inputInteger)
{
   int size = log10(inputInteger);
   
}