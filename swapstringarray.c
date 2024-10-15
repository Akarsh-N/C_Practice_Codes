#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swapstrarr(char a[], char b[]); //void swapstrarr(char *a,char *b);

int main(void)
{
    char str1[8] = "Akarsh"; //Index value needs to be assigned or else unexpected result due to compile time it allocates fixed sizes 
    char str2[8] = "Narayan"; // if arr is defined like str1[] or str2[], so The two arrays str1 and str2 cannot be resized dynamically, 
                   //which means if one string is longer than the other, the swap operation will result in corrupted output or memory errors.

    printf("Before swap : %s %s\n",str1 , str2);
    swapstrarr(str1,str2);
    printf("After swap : %s %s\n",str1 , str2);
    return 0;
}

void swapstrarr(char a[], char b[])
{
    char *temp = (char *)malloc((strlen(a) + 1) * sizeof(char));
    strcpy(temp,a);
    strcpy(a,b);
    strcpy(b,temp);
    free(temp);
}
