#include <stdio.h>

/**
 * Copie la valeur de src dans dest
*/
char *my_strcpy(char *dest, char *src) {
    int i = 0;
    // Tant que  le char actuel n'est pas le null terminator
    while(src[i] != '\0') {
        // le char actuel de dest devient le char actuel de src
        dest[i] = src[i];
        i++;
    }
    // A la fin, ajouter le null terminator
    dest[i] = '\0';
    return dest;
}

// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     // Important ! Variable dé-référencée non-constante
//     char a[] = "destination";

//     // Important ! Variable dé-référencée constante
//     char *b = "source";

//     printf("dest = %s ; src = %s\n", a, b);    
//     my_strcpy(a, b);
//     printf("dest = %s ; src = %s\n", a, b);    

//     return 0;
// }