#include <stdio.h>

int main(void)
{
    int a,b;
    printf("enter the integers a & b:\n");
    scanf("%d %d",&a,&b);

    if((a ^ b) == 0)
    {
        printf("Integers are equal\n");
    }
    else
    {
        printf("Integers are not equal\n");
    }
    return 0;
}