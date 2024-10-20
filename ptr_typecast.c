#include <stdio.h>
typedef char* ptr;
#define PTR char*

int main()
{
    ptr a, b, c;
    PTR x, y, z;
    printf("sizeof a:%zu\n" ,sizeof(a) );
    printf("sizeof b:%zu\n" ,sizeof(b) );
    printf("sizeof c:%zu\n" ,sizeof(c) );
    printf("sizeof x:%zu\n" ,sizeof(x) );
    printf("sizeof y:%zu\n" ,sizeof(y) );
    printf("sizeof z:%zu\n" ,sizeof(z) );

    int m = 0;
    double n = 10.21;
    printf("Size of %d %f is sizeof(m+n) is %lu\n", m, n, sizeof(m + n));

    return 0;
}
