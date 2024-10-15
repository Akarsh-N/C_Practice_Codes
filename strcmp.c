#include <stdio.h>

int strcmpv1(char *str1,char *str2)
{
    int i;
    for(i = 0; str1[i] == str2[i] ; i++)
    {
        if(str1[i] == '\0')
        return 0;
    }
    return str1[i] - str2[i];
}

int strcmpv2(char *str1,char *str2)
{
    int i = 0;
    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0')
        return 0;
        else
        i++;
    }
    return str1[i] - str2[i];    
}

int strcmpv3(char *str1,char *str2)
{
    for(;*str1 == *str2; str1++,str2++)
    {
        if(*str1 == '\0')
        return 0;
    }
    return *str1 - *str2;    
}

int main(void)
{
    char str1[] = "Akarsh";
    char str2[] = "Akarsh";
    printf(" Strcmp return value is %d\n",strcmpv1(str1,str2));

    char str3[] = "Narayan";
    char str4[] = "Murthy";
    printf(" Strcmp return value is %d\n",strcmpv2(str3,str4));

    char str5[] = "Murthy";
    char str6[] = "Narayan";
    printf(" Strcmp return value is %d\n",strcmpv3(str5,str6));

    return 0;
}