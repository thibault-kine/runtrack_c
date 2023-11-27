#include <stdlib.h>
#include <stdio.h>

char *my_strdup(char *str) {
    // Récupère la taille de la str renseignée
    int size = 0;
    while(str[size] != '\0') {
        size++;
    }

    // Assigne chaque char au duplicate
    char *duplicate = malloc(size * sizeof(char));
    for(int i = 0; str[i] != '\0'; i++) {
        duplicate[i] = str[i];
    }

    duplicate[size] = '\0';

    return duplicate;
}

// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     char *a = "Test my_strdup";
//     char *b = my_strdup(a);

//     printf("original = %s ; duplicate = %s\n", a, b);
//     free(b);
// }