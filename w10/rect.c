#include <stdio.h>
#include <math.h>

// Code copied from point.c

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

// New code

typedef struct {
    point lowleft;
    point upright;
} rect;

double rectarea(rect rec) {
    // fabs(x) gives the absolute value of x
    return fabs((rec.upright.x - rec.lowleft.x) * (rec.upright.y - rec.lowleft.y));
}

const int SIZE = 3;

// Read a list of points from a file
void readpts(char *filename, point pts[]) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file %s\n", filename);
        return;
    }

    for (int i = 0; i < SIZE; i++) {
        fscanf(fp, "%lf", &pts[i].x);
        fscanf(fp, "%lf", &pts[i].y);
    }

    fclose(fp);
}

// Return the farthest distance and the pointers of pointer to point
double farthestdist(point pts[], point **pp1, point **pp2) {
    double max = 0, dist;
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            dist = pointdist(pts[i], pts[j]);
            if (dist > max) {
                max = dist;
                *pp1 = &pts[i];
                *pp2 = &pts[j];
            }
        }
    }
    return max;
}

int main(void) {
    point pts[SIZE];
    readpts("points.txt", pts);
    point *p1, *p2;
    printf("The farthest distance is %lf betwen two points: \n", farthestdist(pts, &p1, &p2));
    pointshow(*p1);
    pointshow(*p2);
    
    return 0;
}
