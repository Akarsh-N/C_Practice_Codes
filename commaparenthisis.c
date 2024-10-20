#include <stdio.h>
 
int main(void)
{
    // using comma without parenthesis
    int x = (12, 20, 24);
    printf("%d\n", x);

    int y;
    y = 12, 20, 24;
    printf("%d\n", y);

    // Comma separating z=10 and m
    int z = 10, m;
 
    // Comma acting as operator
    // m= (z+2) and z=(z+3)
    m = (z++, printf("z = %d\n", z), ++z,printf("z = %d\n", z), z++);
 
    // Note that last expression is evaluated
    // but side effect is not updated to m
    printf("m = %d\n", m);
    printf("z = %d\n", z);

    return 0;
}
