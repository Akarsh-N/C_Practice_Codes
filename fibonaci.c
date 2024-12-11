#include<stdio.h>

int fib(int n)
{
    int f[n+2];
    int i = 0;

    f[0] = 0;
    f[1] = 1;

    printf("Fibonanci is %d %d ", f[0],f[1]);
    for(i = 2; i<=n ; i++) // for(i = 2; i <= n+2 ; i++)
    {
        f[i] = f[i-1] + f[i-2];
        printf("%d ", f[i]);
    }
    printf("\n");
    return f[n]; // return f[n+2];
}

void fibonacci_v2(int n)
{
    int f[n+2];
    
    f[0] = 0;
    f[1] = 1;
    printf("%d %d ",f[0],f[1]);

    for(int i = 2; i < n; i++)
    {
        f[i] = f[i-1] + f[i-2];
        if(f[i] <= n)
        printf("%d ",f[i]);
        else
        break;
    }
}

int main(void)
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("Fibonanci is %d\n", fib(num));
    fibonacci_v2(num);
    return 0;
}


