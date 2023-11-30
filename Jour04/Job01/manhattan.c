#include <stdio.h>
#include "manhattan.h"

int manhattan(point a, point b) {
    int res = ABS((b.x - a.x) + (b.y - a.y));
    return res;
}

int main() {
    point p1;
    p1.x = 5;
    p1.y = 2;

    point p2;
    p2.x = 1;
    p2.y = 2;

    printf("%d\n", manhattan(p1, p2));
}