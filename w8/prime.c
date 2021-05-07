#include <stdio.h>

int isprime(int interger);

int main()
{   
    int i;
    printf("input int: ");
    scanf("%d", &i);

    isprime(i) == 1 ? printf("%d is prime", i) : printf("%d is not prime", i);
    return 0;
}

int isprime(int interger)
{
    if(interger == 2)
    {
        return 1;
    }


    for(int i = 2; i < interger; i++)
    {
        if(interger % i == 0)
        {
            return 0;
        }
    }

    return 1;
    
}