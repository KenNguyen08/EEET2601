#include <stdio.h>

void swapValues(int *a, int *b);

int main()
{

    int num1 = 5; 
    int num2 = 7; 

    printf("before call swapValues function: a = %d b = %d\n", num1, num2);
    swapValues(&num1,&num2);
    printf("after call swapValues function: a = %d b = %d\n", num1, num2);
    return 0;
}

void swapValues(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}