#include <unistd.h>
#include <stdio.h>

int my_strlen(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}


// UNCOMMENT FOR DEBUG AND TESTING
// int main() {
//     printf("%d", my_strlen("Test!"));
//     return 0;
// }