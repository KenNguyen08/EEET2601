/*calculate the gross salary*/


#include <stdio.h>

int main()
{
    float bp, da, hra, grpay;
    printf("\nEnter the Basic salary of Ramesh:");
    scanf("%f", &bp);



    da=0.4 *bp;
    hra=0.2*bp;
    grpay= bp+da+hra; //Gross paid = all allowance + basic paid//

    printf("Basic of of Ramesh = %.2f\n",bp);
    printf("Dearness Allowanceh hers = %.2f\n",da);
    printf("House Rent Allowance of hers = %.2f\n",hra);
    printf("Gross pay of hers = %.2f\n",grpay);


    return 0;
}
