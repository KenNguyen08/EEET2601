#include <stdio.h>
#include <math.h>

int main () {
    // Input minutes
    int minutes;
    printf("Enter minutes: ");
    scanf("%d", &minutes);

    // Compute hours and mins
    int hours, mins;
    hours = minutes / 60;
    mins = minutes % 60; 

    // Output hours and mins
    printf("%d hours %d minutes \n", hours, mins);

    return 0;
}