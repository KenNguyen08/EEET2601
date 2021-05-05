#include <stdio.h>

int main()
{
    int vnd, usd;

    /* Input amount in vnd */
    printf("Enter the amount of vietnamese dong: ");
    scanf("%d", &vnd);

    /* vnd to usd conversion formula */
    usd = (vnd/23090.50) ;

    printf("%.2d vnd = %.2d usd", vnd, usd);
    

    return 0;
}