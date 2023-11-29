#include <stdio.h>

int my_sqrt(int n) {
    // au cas où la racine carrée d'un nombre négatif n'est pas définie
    if (n < 0) return 0;

    int res = n; 

    // boucle jusqu'à atteindre une précision suffisante
    while (res * res - n > 0) {
        int new_val = 0.5 * (res + n / res);

        // si la valeur a changé
        if (new_val == res) {
            break;
        }

        res = new_val;
    }

    return res;
}

int main() {
    printf("%d\n", my_sqrt(9)); // 3
}