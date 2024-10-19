#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 10
int main()
{
    char buf[ARRAY_SIZE];
    printf("Enter a string: ");
    gets(buf);
    printf("string is: %s\n",buf);
    char buf1[ARRAY_SIZE];
    printf("Enter a string: ");
    fgets(buf1,ARRAY_SIZE,stdin);
    printf("string is: %s\n",buf1);

    return 0;
}

// o/p:
// Enter a string: Akarsh
// string is: Akarsh
// Enter a string: Akarsh Narayan
// string is: Akarsh Na
