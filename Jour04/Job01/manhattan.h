#ifndef MANHATTAN_H
#define MANHATTAN_H

typedef struct t_point {
    int x, y;
} t_point;

int manhattan(t_point a, t_point b);

int my_abs(int n);

#endif