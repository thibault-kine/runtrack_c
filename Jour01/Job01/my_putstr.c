#include <unistd.h>

void my_putstr(char *str) {
    int i = 0;
    // Tant que le char actuel n'est pas le null terminator
    while(str[i] != '\0') {
        // Affiche le char actuel dans la chaine et incrémente pour passer à l'index suivant
        write(1, &str[i], sizeof(char));
        i++;
    }
}

int main() {
    my_putstr("Hello\0");
    return 0;
}
