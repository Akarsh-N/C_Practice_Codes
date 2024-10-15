#include <stdio.h>

#define pseudo main 
//#define pseudo m##a##i##n // Even this works

// 32 : Space
// 48 - 57 : 0 to 9
// 65 - 90 : A to Z
// 97 - 122 : a to z
// \n : 10

int pseudo(void)
{
    int i = 0;
    if(printf("Hi.. Welcome to Mysuru"))
    {
    }

    //59 is the ascii value of semicolumn
    if (printf("%c\n", 59)) 
    {
    }

    for( i = 65; i<= 90 ; i++)
    {
        int j;
        j = i;
        printf("%c \t",i);
        i = i+32;
        printf("%c\n",i);
        i = j;
    }

    for( i = 48; i<= 57 ; i++)
    {
        printf("%c\t",i);
    }
    printf("\n");
    return 0;
}

