#ifndef MANHATTAN_H
#define MANHATTAN_H

#define ABS(x) (x < 0 ? -x : x)

typedef struct point {
    int x, y;
} point;

int manhattan(point a, point b);

#endif