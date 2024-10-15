#include <stdio.h>

int add(int *c, int *d)
{
    *c = 5;
    *d = 10;
	printf("%p %p\n",c,d);
    return (*c + *d);
}

int main()
{
    int a = 4, b = 5;
    printf("Before: a: %d b: %d\n",a,b);
	printf("%p %p\n",&a,&b);
    printf("After change: a: %d b: %d add: %d\n", a, b, add(&a,&b));
    return 0;
}
