#include <stdio.h>

static int m; // Auto initialization of Zero
int x; //Global variable
int y; //Externed in file1.c
int cally();

int main()
{
    int a;
    static int n;
    printf("Uninitialized local variable a is %d\n",a); //Garbage Value
    printf("static m outside main is %d \nstatic n inside main is %d\n",m,n); // Auto initialization of Zero
    printf("Global variable x is %d \n",x); // Auto initialization of Zero

    y = 10;
    printf("Extern variable y before is %d\n",y);
    printf("Extern y after called in file1.c is %d\n",cally());
    return 0;
}
