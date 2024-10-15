#include <stdio.h>

void swap(int **a,int **b);

int main(void)
{
    int a = 10;
    int b = 20;
    int *c = &a;
    int *d = &b;

    printf("Before Swap: %d %d\n",*c, *d);
    swap(&c,&d);
    printf("After Swap: %d %d\n",*c, *d);
    return 0;
}

void swap(int **a,int **b)
{
    int *temp = *a;
    *a = *b;
    *b = temp;
    //printf("After Swap: %d %d\n",**a, **b);
}