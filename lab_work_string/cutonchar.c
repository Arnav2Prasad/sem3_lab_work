#include <stdio.h>

char* cutonchar(char* str, char ch) {
    char* result = str;
    
    while (*result != '\0' && *result != ch) {
        result++;
    }

    if (*result == ch) {
        *result = '\0';
    }

    return str;
}

int main() {
    char str1[] = "something bad";
    char ch1 = ' ';
    printf("Cut on '%c': %s\n", ch1, cutonchar(str1, ch1));

    char str2[] = "something bad";
    char ch2 = 'e';
    printf("Cut on '%c': %s\n", ch2, cutonchar(str2, ch2));

    return 0;
}

