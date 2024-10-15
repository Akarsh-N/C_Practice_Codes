#include <stdio.h>

int add(int c, int d)
{
    printf("%p %p\n",&c,&d);
    return (c + d);
}

int main()
{
    int a = 4, b = 5;
	printf("%p %p\n",&a,&b);
    printf("a: %d b: %d add: %d\n",a,b,add(a,b));
    return 0;
}
