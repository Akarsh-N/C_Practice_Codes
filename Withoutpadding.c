#include <stdio.h>

typedef struct random{
float a;
char b;
short d;
int c;
double e;
}randm;

typedef struct random1{
float a;
char b;
int e;
int c;
short d;
}randm1;


int main(void) {
    // Write C code here
    printf("Size of struct randm %ld\n",sizeof(randm));
    printf("Size of struct randm1 %ld\n",sizeof(randm1));

    randm rdm1;
    randm1 rdm2;

    printf("%p\n",&rdm1.a);
    printf("%p\n",&rdm1.b);
    printf("%p\n",&rdm1.d);
    printf("%p\n",&rdm1.c);
    printf("%p\n\n",&rdm1.e);

    printf("%p\n",&rdm2.a);
    printf("%p\n",&rdm2.b);
    printf("%p\n",&rdm2.e);
    printf("%p\n",&rdm2.c);
    printf("%p\n",&rdm2.d);
    return 0;
}
