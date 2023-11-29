#include <stdio.h>

int power(int n, int pow) {
    
    int res = 1;
    for(int i = 1; i <= pow; i++) {
        res *= n;
    }

    return res;
}

// int main() {
//     printf("3^0 = %d\n", power(3, 0)); // 1
//     printf("3^1 = %d\n", power(3, 1)); // 3
//     printf("3^2 = %d\n", power(3, 2)); // 9
//     printf("3^3 = %d\n", power(3, 3)); // 27
// }