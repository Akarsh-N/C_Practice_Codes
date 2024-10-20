#include <stdio.h>

int main(void) 
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number & (1 << (sizeof(int) * 8 - 1)))
    {
        printf("%d is a negative number.\n", number);
    } else {
        printf("%d is a positive number.\n", number);
    }

    return 0;
}
