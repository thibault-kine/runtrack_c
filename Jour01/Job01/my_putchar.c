#include <unistd.h>

void my_putchar(char c) {
    write(1, &c, sizeof(char));
}

int main() {
    my_putchar('a');
    return 0;
}
