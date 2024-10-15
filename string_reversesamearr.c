#include <stdio.h>
#include <string.h>

void stringrev(char arr[], int length)
{
    for(int i = 0,j=length-1; i < j; i++,j--)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void stringrev1(char *arr , int length)
{
    for(int i = 0,j=length-1; i < j; i++,j--)
    {
        char temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
    }
}

int main(void)
{
    char str[] = "Akarsh Narayan Murthy";
    //int len = sizeof(str)/sizeof(str[1]);
    int len = strlen(str);
    printf("String Before reverse is %s\n",str);
    printf("String length is %d\n",len);
    //stringrev(str,len-1); //be careful with length
    stringrev(str,len);
    printf("String after reverse is %s\n",str);
    return 0;
}