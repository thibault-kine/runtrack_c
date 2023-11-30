#include <stdio.h>
#include <stdlib.h>

char *my_itoa(int n) {
    char *str = malloc(sizeof(char) * 12);
    int i = 0;

    if (n == 0) {
        str[i++] = '0';
    } else {
        int is_negative = 0;
        if (n < 0) {
            is_negative = 1;
            n = -n;
        }

        while (n != 0) {
            int digit = n % 10;
            str[i++] = digit + '0';
            n /= 10;
        }

        if (is_negative) {
            str[i++] = '-';
        }
    }

    str[i] = '\0';

    // Inverser la chaîne
    for (int j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    return str;
}

// int main() {
//     int my_int = -12345;
//     printf("%s\n", my_itoa(my_int));
//     return 0;
// }