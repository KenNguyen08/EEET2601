#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int sum(int number);

int main()
{
    int inputNumber;
    printf("enter number: ");
    scanf("%d", &inputNumber);

    printf("Sum is: %d", sum(inputNumber));
    return 0;
}

int sum(int number)
{
    number = abs(number);
    if(number == 0)
    {
        return 0;
    }
    return number%10 + sum(number/10);
}






