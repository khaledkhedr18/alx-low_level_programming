#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (str != NULL) {
        int length = strlen(str);
        for (int i = 0; i < length / 2; i++) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
    }
}

int main() {
    char text[] = "Hello, World!";
    reverseString(text);
    printf("Reversed string: %s\n", text);
    return 0;
}
