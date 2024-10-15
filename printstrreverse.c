#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Akarsh Narayan";
    int n = strlen(str);
    for(int i = n-1 ;i >= 0 ; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}