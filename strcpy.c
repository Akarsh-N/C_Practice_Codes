#include <stdio.h>

void strcpyv1(char *str2,char *str1)
{
    int i;
    for(i=0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}

void strcpyv2(char *str2,char *str1)
{
    int i = 0;
    while((str2[i] = str1[i]) != '\0')
    {
        i++;
    }
    str2[i] = '\0';    
}

void strcpyv3(char *str2,char *str1)
{
    int i = 0;
    while((*str2++ = *str1++) != '\0');
    *str2 = '\0'; 
}

int main(void)
{
    char str1[] = "Akarsh";
    char str2[] = {'\0'};

    strcpyv1(str2,str1);
    printf("Str2 is %s\n",str2);

    char str3[] = "Narayan";
    char str4[] = {'\0'};

    strcpyv2(str4,str3);
    printf("Str2 is %s\n",str4);

    char str5[] = "Murthy";
    char str6[] = {'\0'};

    strcpyv3(str6,str5);
    printf("Str2 is %s\n",str6);
    return 0;
}