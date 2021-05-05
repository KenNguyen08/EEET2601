#include <stdio.h>
#include <math.h>

int main() {
    // Input x, y
    double x, y;
    printf("Enter x and y: ");
    scanf("%lf%lf", &x, &y);

    // Calculate power
    double power = pow(x, y);

    // Output power
    printf("x^y = %lf\n", pow(x, y));

    return 0;
}