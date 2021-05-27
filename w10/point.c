#include <stdio.h>
#include <math.h>

const float EPSILON = 0.000001;

typedef struct { double x; double y; } point; 

void pointshow(point p1) {
    printf("[%.2lf, %.2lf]\n", p1.x, p1.y);
}

double pointdist(point p1, point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int pointequal(point p1, point p2) {
    return (pointdist(p1,p2) < EPSILON)? 1 : 0;
}

int main(void) {
    point test = {.25, .75};
    point test2 = {3.25, 4.75};

    pointshow(test);

    printf("The distance between test and test2 is %.2lf\n", pointdist(test, test2));

    printf("%d\n", pointequal(test, test2));
    printf("%d\n", pointequal(test, test));
    return 0;
}
