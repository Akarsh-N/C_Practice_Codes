#include<stdio.h>

int factorial(int n)
{
    while(n >= 0)
    {
        if (n <= 1)
        return (1);
        return (n * factorial(n-1));
    }    
}

int factorialv1(int n)
{
    int fact = 1;
    
    if (n == 0 || n == 1)
    return (1);
    
    for(int i = 0 ; i < n-1 ; i++)
    {
        fact = fact * (n - i);
        printf("%d ",fact);
    }
    printf("\n");
    
   return fact; 
}

int main(void)
{
    int n = 4;
    printf("factorial using recursive func %d\n", factorial(n));
    printf("factorial normal %d\n", factorialv1(n));
    return 0;
}
