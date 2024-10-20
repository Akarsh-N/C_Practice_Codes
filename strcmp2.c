#include <stdio.h>


int my_strcmp(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }

    if (*str1 == *str2) {
        return 0; // Strings are equal
    } else if (*str1 < *str2) {
        return -1; // str1 is less than str2
    } else {
        return 1; // str1 is greater than str2
    }
}

int main() {
    const char *string1 = "Hello, world!";
    const char *string2 = "Hello, universe!";

    int result = my_strcmp(string1, string2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("String1 is less than String2.\n");
    } else {
        printf("String1 is greater than String2.\n");
    }


    return 0;
}
