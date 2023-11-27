#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, sizeof(char));
}

void my_putstr(char *str) {
    // Tant que le char actuel n'est pas le null terminator
    for(int i = 0; str[i] != '\0'; i++) {
        // Affiche le char actuel dans la chaine et incrémente pour passer à l'index suivant
        my_putchar(str[i]);
    }
}


// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     my_putstr("Hello\0");
//     return 0;
// }
