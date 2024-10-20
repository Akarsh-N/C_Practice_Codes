#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Ensure the destination string is null-terminated
}

int main() {
    char destination[100];
    const char source[] = "Hello, world!";

    my_strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    return 0;
}
