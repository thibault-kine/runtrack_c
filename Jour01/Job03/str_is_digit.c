#include <stdio.h>

int char_is_digit(char c) {
    // Début et fin des chiffres sur la table ASCII
    //                     48             57
    const int NUM_START = '0', NUM_END = '9';

    // Retourne 1 si le char est un digit, sinon 0
    return c >= NUM_START && c <= NUM_END;
}

int str_is_digit(char *str) {
    // Pour chaque char
    for(int i = 0; str[i] != '\0'; i++) {
        // Si le char actuel N'EST PAS un digit
        if(!char_is_digit(str[i])) {
            // Retourne 0 (= false)
            return 0;
        }
        // Sinon, on continue...
        continue;
    }

    // Si aucun non-digit n'a été détecté, on sort du for et on retourne 1 (= true)
    return 1;
}

// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     char *str_1 = "Hello World";
//     char *str_2 = "H3ll0 W0rld";
//     char *str_3 = "1234567890";

//     printf("%s ne contient que des digits ? %d\n", str_1, str_is_digit(str_1));
//     printf("%s ne contient que des digits ? %d\n", str_2, str_is_digit(str_2));
//     printf("%s ne contient que des digits ? %d\n", str_3, str_is_digit(str_3));
// }