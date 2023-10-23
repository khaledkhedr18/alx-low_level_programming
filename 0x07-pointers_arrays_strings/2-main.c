#include <stdio.h>
#include <string.h>

char *_strchr(char *s, char c);

int main() {
    char str1[] = "Hello, World!";
    char str2[] = ".,l;p[This is a test";
    char str3[] = "OpenAI";
    char str4[] = "A quick brown fox";
    char str5[] = "1234567890";
    char str6[] = "aaaabbbbcccc";
    char str7[] = "Test";
    char str8[] = "";
    char str9[] = "Mississippi";
    char str10[] = "Programming";

    char searchChar = 'i';

    printf("Searching for '%c' in the strings:\n", searchChar);

    printf("str1: %s\n", _strchr(str1, searchChar));
    printf("str2: %s\n", _strchr(str2, searchChar));
    printf("str3: %s\n", _strchr(str3, searchChar));
    printf("str4: %s\n", _strchr(str4, searchChar));
    printf("str5: %s\n", _strchr(str5, searchChar));
    printf("str6: %s\n", _strchr(str6, searchChar));
    printf("str7: %s\n", _strchr(str7, searchChar));
    printf("str8: %s\n", _strchr(str8, searchChar));
    printf("str9: %s\n", _strchr(str9, searchChar));
    printf("str10: %s\n", _strchr(str10, searchChar));

    return 0;
}
