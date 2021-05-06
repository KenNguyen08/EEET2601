#include <stdio.h>


void printIntSperatedBySpace(int inputInt);

int main()
{
    int inputInteger = -1;

    while(inputInteger <= 0)
    {
        printf("enter integer: ");
        scanf("%d", &inputInteger);

    }
    printIntSperatedBySpace(inputInteger);
    
    return 0;
}

void printIntSperatedBySpace(int inputInt)
{
    while(inputInt != 0 )
    {
        printf("%2d", inputInt%10);
        inputInt /= 10;
    }
}