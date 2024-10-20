#include <stdio.h>

#pragma pack(push, 1) // Start packing with 1-byte alignment
struct MyStruct1 {
    char a;
    int b;
    double c;
};
#pragma pack(pop) // Restore default packing

struct MyStruct2 {
    char a;
    int b;
    double c;
};

int main(void) {
    struct MyStruct1 myStruct1;
    struct MyStruct2 myStruct2;
    printf("Size of MyStruct1: %lu bytes\n", sizeof(myStruct1));
    printf("Size of MyStruct2: %lu bytes\n", sizeof(myStruct2));
    return 0;
}
