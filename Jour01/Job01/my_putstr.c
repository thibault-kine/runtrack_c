#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, sizeof(char));
}

void my_putstr(char *str) {
    int i = 0;
    // Tant que le char actuel n'est pas le null terminator
    while(str[i] != '\0') {
        // Affiche le char actuel dans la chaine et incrémente pour passer à l'index suivant
        my_putchar(str[i]);
        i++;
    }
}


// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     my_putstr("Hello\0");
//     return 0;
// }
