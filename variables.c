#include "variables.h"

// Global variable x
int x = 50;
 
int main()
{
    // Local variable x
    int x = 10;
    {
        extern int x;
        printf("Value of global x is %d %p\n", x,&x);
    }
    printf("Value of local x is %d\n", x);
    func();
    {
        extern int x;
        printf("GV is %d\n",x);
    }
    return 0;
}

