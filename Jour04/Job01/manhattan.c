#include <stdio.h>
#include "manhattan.h"

#define ABS(x) (x < 0 ? -x : x)


int manhattan(t_point a, t_point b) {
    int res = ABS((b.x - a.x) + (b.y - a.y));
    return res;
}

// int main() {
//     t_point p1;
//     p1.x = 5;
//     p1.y = 2;

//     t_point p2;
//     p2.x = 1;
//     p2.y = 2;

//     printf("%d\n", manhattan(p1, p2));
// }