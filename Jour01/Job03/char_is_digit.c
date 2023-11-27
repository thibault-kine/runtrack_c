#include <stdio.h>

int char_is_digit(char c) {
    // Début et fin des chiffres sur la table ASCII
    //                     48             57
    const int NUM_START = '0', NUM_END = '9';

    // Retourne 1 si le char est un digit, sinon 0
    return c >= NUM_START && c <= NUM_END;
}

// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     char a = 'J';
//     char b = '5';
//     printf("%c est-il un digit ? %d\n", a, char_is_digit(a));
//     printf("%c est-il un digit ? %d\n", b, char_is_digit(b));
//     return 0;
// }
