#include <stdio.h>

int main()
{
    //print the array elements in thye normal order.
    int arr[] = {12, 7, -3, 4, 1};
    
    for( int *p = arr ;p < arr + 5; p++)
    {
        printf("%2d", *p);
    }
    


    printf("\n");
    // reverse oder
    for(int *p = arr +4; p >= arr; p--)
    {
        printf("%3d", *p);
    }

    //sum
    int sum = 0;
    for(int  *p = arr; p < arr+5; p++)
    {
        sum += *p;
    }
    printf("\n%3d", sum);
    
    // REVERSE 
    int middle = 5/2;
    for(int i = 0; i < middle; i++)
    {
        int temp = *(arr + i);
        *(arr+i) = *(arr + 4 - i);
        *(arr + 4 - i) = temp;
    }
    printf("\n");
    for( int *p = arr ;p < arr + 5; p++)
    {
        printf("%2d", *p);
    }
    
    return 0;
}