#include <stdio.h>
#include <stdlib.h>
#include "../../Jour02/Job03/array_clone.c"

int my_atoi(char *str) { // pointe vers un type char (chaine de char)

    int size = 0;
    while(str[size] != '\0') size++;

    int res = 0;
    int sign = 1; // 1 = positive, -1 = negative
    const int SHIFT = 48; // Décalage entre le char et sa valeur décimale en ASCII
    
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') i++; // Si le char actuel est un espace, on skip
        if(str[i] == '\n' || str[i] == '\t' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r') break; // Si le char actuel est un line break ou un tab, on sors

        // Assignation de 'sign', positif ou négatif, puis on incrémente pour passer au nombre
        if(str[i] == '+') {
            sign = 1;
            i++;
        }
        else if(str[i] == '-') {
            sign = -1;
            i++;
        }

        // Si le char actuel n'est pas un nombre, on termine la méthode;
        if(str[i] < '0' || str[i] > '9') break;
        else {
            // on multiplie par 10 pour additionner et ajouter de l'espace à droite pour les nombres suivants
            res = res * 10 + (str[i] - SHIFT);
        }
    }

    // On assigne le signe de res
    if(sign > 0) res = +res;
    if(sign < 0) res = -res;

    return res;
}

// int main() {
//     char *my_str = "-12345";
//     printf("my_str = %d\n", my_atoi(my_str));
//     return 0;
// }