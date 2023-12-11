#include <stdio.h>
#include <string.h>

void rev(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char myString[] = "Hello, World!";
    
    printf("Original string: %s\n", myString);

    rev(myString);

    printf("Reversed string: %s\n", myString);

    return 0;
}

