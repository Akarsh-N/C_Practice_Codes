#include <stdio.h>

void swapstr(char **a, char **b);

int main(void)
{
    char *str1 = "Akarsh";
    char *str2 = "Narayan";
    
    printf("Before swap : %s %s\n",str1,str2);
    printf("Before swap first charcters : %c %c\n",*str1, *str2);
    swapstr(&str1,&str2);
    printf("After swap : %s %s\n",str1,str2);
    printf("After swap first charcters : %c %c\n",*str1, *str2);
    return 0;
}

void swapstr(char **a, char **b)
{
    char *temp = NULL;
    temp = *a;
    *a = *b;
    *b = temp;
}