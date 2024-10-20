#include <stdio.h>
char strptr[] = "0b1010";

int main(void)
{
    char *str = &strptr[0];

    if(str[0] == '0')
    {
        str++;
        if(*str == 'b')
        {
            printf("Binary data\n");
        }
        else if(*str == 'X' || *str == 'x')
        {
            printf("Hexadecimal data\n");
        }
         else if(*str == 'O')
        {
            printf("Octal data\n");
        }
        else
        {
            printf("Decimal data\n");
        }
    }
    return 0;
}
