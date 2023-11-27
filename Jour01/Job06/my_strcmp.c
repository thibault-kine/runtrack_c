#include <stdio.h>
#include <unistd.h>

int char_is_valid(char c) {
    const int CHAR_START = '!', CHAR_END = '~';

    return c >= CHAR_START && c <= CHAR_END;
}

int str_is_valid(char *str) {
    // Pour chaque char
    for (int i = 0; str[i] != '\0'; i++) {
        // Si le char actuel N'EST PAS un digit
        if (!char_is_valid(str[i])) {
            // Retourne 0 (= false)
            return 0;
        }
        // Sinon, on continue...
        continue;
    }

    return 1;
}

int my_strcmp(char *str1, char *str2){

    // Tant que l'une des deux str n'est pas finie
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        // si les deux str sont valides
        if (str_is_valid(str1) && str_is_valid(str2)) {
            // Vérification du char
            // str1 > str2
            if (str1[i] > str2[i]) {
                return 1;
            }

            // str1 < str2
            if (str1[i] < str2[i]) {
                return -1;
            }
        }
    }

    return 0;
}

// UNCOMMENT FOR DEBUG AND TESTING
int main() {
    char *ref = "abcde";
    char *sup = "bcdef";
    char *inf = "!abcd";

    printf("%s compared to %s = %d\n", ref, ref, my_strcmp(ref, ref)); // Égalité
    printf("%s compared to %s = %d\n", ref, inf, my_strcmp(ref, inf)); // Inferiorité
    printf("%s compared to %s = %d\n", ref, sup, my_strcmp(ref, sup)); // Supériorité
}