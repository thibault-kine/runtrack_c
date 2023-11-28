#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// int main() {
//     int x = 6, y = 8;
//     printf("x = %d ; y = %d\n", x, y);
//     swap(&x, &y);
//     printf("x = %d ; y = %d\n", x, y);
// }