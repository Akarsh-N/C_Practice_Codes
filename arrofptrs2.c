#include<stdio.h>

int main()
{
    int *arr[4];
    int a = 10, b = 20, c = 30, d = 40, e = 50, i;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    arr[4] = &e;

    printf("Address of a = %p\n",arr[0]);
    printf("Address of b = %p\n",arr[1]);
    printf("Address of c = %p\n",arr[2]);
    printf("Address of d = %p\n",arr[3]);
    printf("Address of e = %p\n",arr[4]);

    for(i = 0; i < 5; i++)
        printf("value stored at arr[%d] = %d\n",i+1,*arr[i]);

    return 0;
}
