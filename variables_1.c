#include "variables.h"

void func(void)
{
    printf("GV is %d , %p\n", x , &x);
    x = 25;
}
