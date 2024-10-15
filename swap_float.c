#include <stdio.h>

void swapv1(float *ptr1, float *ptr2)
{
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void swapv2(float *ptr1, float *ptr2)
{
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

void swapv3(int a, int b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping : A  = %d\t B = %d\n", a, b);
}

void swapv4(int a, int b)
{
    a ^= b;
    b ^= a;
    a ^= b;
    printf("After swapping : A  = %d\t B = %d\n", a, b);
}

int main(void)
{
    float m, n, x, y; 
    int a, b, c, d;
    printf("Enter the value of M (accepted decimal values): ");
    scanf("%f", &m);
    printf("Enter the value of N (accepted decimal values): ");
    scanf("%f", &n);
    printf("Before swapping : M = %5.2f\tN = %5.2f\n", m, n);
    swapv1(&m, &n);
    printf("After swapping : M  = %5.2f\tN = %5.2f\n", m, n);

    printf("Enter the value of X (accepted decimal values): ");
    scanf("%f", &x);
    printf("Enter the value of Y (accepted decimal values): ");
    scanf("%f", &y);
    printf("Before swapping : X = %5.2f\t Y = %5.2f\n", x, y);
    swapv2(&x, &y);
    printf("After swapping : X  = %5.2f\t Y = %5.2f\n", x, y);

    printf("Enter the value of A : ");
    scanf("%d", &a);
    printf("Enter the value of B : ");
    scanf("%d", &b);
    printf("Before swapping : A = %d\t B = %d\n", a, b);
    swapv3(a, b);

    c = 34;
    d = 24;
    printf("Before swapping : C = %d\t D = %d\n", c, d);
    c = c + d - (d = c);
    printf("After swap: C = %d\t D = %d\n",c,d);

    printf("Before swapping : A = %d\t B = %d\n", c, d);
    swapv4(c, d);

   return 0;
}

