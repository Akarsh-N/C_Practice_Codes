#include <stdio.h>

void my_strcat(char *dest, const char *src) {
    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Ensure the destination string is null-terminated
}

int main() {
    char destination[100] = "Hello, ";
    char source[] = "world!";
    my_strcat(destination, source);
    printf("Concatenated string: %s\n", destination);
    return 0;
}
