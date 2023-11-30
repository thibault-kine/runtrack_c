#ifndef MANHATTAN_H
#define MANHATTAN_H

typedef struct point {
    int x, y;
} point;

int manhattan(point a, point b);

int my_abs(int n);

#endif