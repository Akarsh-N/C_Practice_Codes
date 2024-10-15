#include <stdio.h>
#include <string.h>

char * swap(char *str,int n);

int main()
{
    // Defining an integer constant
    const int var = 10;
    printf("Initial Value of Constant: %d\n", var);
 
    // defining a pointer to that const variable
    int* ptr = &var;
    // changing value
    *ptr = 500;
    printf("Final Value of Constant: %d\n", var);

    char str[] = "AkarshNarayan";
    char *sptr = str;
    
    while(*sptr!='\0')
    {
        printf("%c ", *sptr);
        sptr++;
    }
    printf("\n");

    int n;
    n = strlen(str);
    
    sptr = swap(str,n);
    printf("%s\n",sptr);

    return 0;
}

char* swap(char *str,int n)
{
    static char str1[20];
    
    for(int i=0,j=n-1; str[i]!='\0';i++,j--)
    {
        str1[i] = str[j];
    }
    
    return str1;
}