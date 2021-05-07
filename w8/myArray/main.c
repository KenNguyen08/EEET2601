#include <stdio.h>
#include "myarray.h"

int main() {
    int myarr[5] = {29, 81, 72, 0, -4};
    printarray(myarr, 5);
    printarrayreverse(myarr, 5);
    printf("%d\n", max(myarr, 5));
    printf("%3d\n", findinteger(myarr, 5, 90));
    printf("%3d\n", findinteger(myarr, 5, 81));
    return 0;
}