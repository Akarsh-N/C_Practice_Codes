#include <stdio.h>

int stringlen(char *arr)
{
    int i;
    for(i = 0; arr[i]!='\0'; i++)
    {
    }
    return i;
}

int stringlenv2(char *arr)
{
    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
    };
    return i;
}

int main(void)
{
    char str[] = "Akarsh Narayan Murthy";
    int len = stringlenv2(str);
    printf("String length is %d\n",len);
    return 0;
}