#include <stdio.h>

// To force compiler to use 1 byte packaging
#pragma pack(2)
struct s {
    double d;
    int i;
    char ch;
};

struct n {
    double d;
    int i;
    char ch;
} __attribute__((packed));

int main()
{
    struct s A;
    struct n B;

    printf("Size of A with Pack 2 is: %ld\n", sizeof(A));
    printf("Size of B is: %ld\n", sizeof(B));
    return 0;
}
