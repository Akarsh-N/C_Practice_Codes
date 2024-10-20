#include <stdio.h>

struct Example {
    int a;
    char b;
    double c;
};

int main() {
 
    printf("sizeof(123456) is %ld\n", sizeof(123456));
    printf("sizeof(“123456”) is %ld\n", sizeof("123456"));

    struct Example example;
    struct Example *ptr1, *ptr2;

    ptr1 = &example;
    ptr2 = ptr1 + 1;

    size_t size = (size_t)(ptr2) - (size_t)(ptr1);
    printf("Size of struct Example: %zu bytes\n", size);

    return 0;
}

