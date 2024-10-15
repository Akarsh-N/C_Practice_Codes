#include <stdio.h>
#include "staticvar.h"

static int y = 30; // static variable 

void function(int * y)
{
    printf("\tBefore Static: %d\n", *y);
    *y = *y + 10;
    printf("\tAfter Static: %d\n", *y);
}
 
int main()
{
    printf("First Call\n");
    function(&y);
    func(&y);
    printf("Second Call\n");
    function(&y);
    func(&y);
    printf("Third Call\n");
    function(&y);
    func(&y);
    function(&y);
    return 0;
}
