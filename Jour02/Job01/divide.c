#include <stdio.h>

void divide(int *val) { // 2) pointe vers le type int
    *val /= 2; // 3) pointe vers la valeur par déréférencement
}

// int main() {
//     int a = 32;
//     divide(&a); // 1) '&' renvoie l'adresse de 'a'
//     printf("%d", a);
// }