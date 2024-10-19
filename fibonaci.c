#include<stdio.h>

int fib(int n)
{
    int f[n+2];
    int i = 0;

    f[0] = 0;
    f[1] = 1;

    printf("Fibonanci is %d %d ", f[0],f[1]);
    for(i = 2; i<=n ; i++)
    {
        f[i] = f[i-1] + f[i-2];
        printf("%d ", f[i]);
    }
    printf("\n");
    return f[n];
}

int main(void)
{
int n = 9;
printf("Fibonanci is %d\n", fib(n));
return 0;
}
