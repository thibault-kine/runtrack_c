#include <unistd.h>
#include <stdio.h>

int my_strlen(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }

    return i;
}

int main() {
    int len = my_strlen("Test!");
    printf("%d", len);
    return 0;
}