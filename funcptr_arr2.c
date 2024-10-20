#include <stdio.h>

typedef int* (*fun[])(int *);
int * square(int *n);
int * cube(int *n);

int * square(int *n)
{
    static int sq;
    sq = *n * *n;
    return &sq;
}

int * cube(int *n)
{
    static int sq;
    sq = *n * *n * *n;
    return &sq;
}

int main()
{
    fun funcc = {square,cube};
    int var = 2;
    int *m = funcc[0](&var);
    printf("Square is %d\n",*m);
    int *n = funcc[1](&var);
    printf("Square is %d\n",*n);
    return 0;
}
