#include <stdio.h>

int main(void)
{
    char *str = "Akarsh";
    printf("String is %s Address of str : %p Value in address of str %p(In Read only region)\n", str,&str,str);
    *str = 'B';
    return 0;
}