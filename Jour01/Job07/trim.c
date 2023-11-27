#include <stdio.h>
#include <stdlib.h>

int is_whitespace(char c) {
    return (c == '\t' || c == '\n' || c == ' ');
}

char *trim(char *src) { 
    // Déclare un pointeur vers un char
    char *end; 

    // Tant que le caractère actuel est un espace, avance dans la chaîne
    while(is_whitespace(*src)) src++; 

    // Si le caractère actuel est le null terminator, renvoie la chaîne
    if(*src == 0) return src; 

    // Parcours la chaîne jusqu'à la fin
    int i = 0;
    while(src[i] != '\0') i++; 

    // Fait pointer "end" vers le dernier caractère non nul de la chaîne
    end = src + i - 1; 

    // Tant que le caractère actuel est un espace, recule dans la chaîne
    while(end > src && is_whitespace(*end)) end--; 

    // Ajoute un caractère de fin de chaîne après le dernier caractère non-espace
    end[1] = '\0'; 

    return src;
}

// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     char a[] = "   hello world  ";
//     printf("%s\n", a);
//     printf("%s\n", trim(a));
// }