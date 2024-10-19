#include <stdio.h>
 
int main(void)
{
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    // Keep dividing until the number is not zero
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem; // sum = sum + num % 10;
        num = num / 10;
    }
    printf("Sum of digits of the number is %d\n", sum);
    return 0;
}
