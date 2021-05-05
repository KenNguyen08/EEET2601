
#include <stdio.h>

int main()
{
    float km, m, ft, inch, cm;
    printf("\nEnter a distance between two cities (Km):");
    scanf("%f",&km);




        m= km*1000;
        ft= km*3280.84;
        inch= km*39370.1;
        cm = km*100000;




    printf("Distance in meters = %.2f\n",m);
    printf("Distance in feets = %.2f\n",ft);
    printf("Distance in inches = %.2f\n",inch);
    printf("Distance in centimeters = %.2f\n",cm);




    return 0;
}