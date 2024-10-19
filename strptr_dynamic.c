#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *name;
    int (*operation)(int x, int y);
}operation;

int sum(int x, int y)
{
    return x+y;
}

int sub(int x, int y)
{
    return x-y;
}

int mul(int x, int y)
{
    return x*y;
}

int main()
{
    operation op[3];
    operation *sptr;
    int n = 3;
    sptr = (operation *)malloc(n * sizeof(operation));

    op[0].name = "Akarsh";
    op[0].operation = sum;

    op[1].name = "Narayan";
    op[1].operation = sub;

    op[2].name = "Murthy";
    op[2].operation = mul;

    for(int i=0; i < n; i++)
    {
        //sptr[i].name = op[i].name;
        //sptr[i].operation = op[i].operation;
        (sptr+i)->name = op[i].name; //sptr[i].name 
        (sptr+i)->operation = op[i].operation; //sptr[i].operation
    }

    for(int i=0; i < n; i++)
    {
        printf("%s\n", sptr[i].name);
        printf("%d\n", sptr[i].operation(3,2));
    }

    free(sptr);
    return 0;
}