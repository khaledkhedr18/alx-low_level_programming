#include <stdio.h>

void _puts(char *str) {
        puts(str);
}

int main() {
    char *text = "Hello, World!";
    _puts(text);
    return 0;
}
