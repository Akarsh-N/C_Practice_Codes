#include <stdio.h>

struct operation {
    char *name;
    int (*operation)(int x, int y);
};

static int add(int a, int b);
static int sub(int a, int b);

struct operation ops1 = {"Addition",add};
struct operation ops2 = {"subtraction", sub};

static int add(int a, int b)
{
    return (a+b);
}

static int sub(int a, int b)
{
    return (a-b);
}

int main()
{
    int a=10;
    int b=5;

    printf("%s = %d\n",ops1.name,ops1.operation(a,b));
    printf("%s = %d\n",ops2.name,ops2.operation(a,b));

    // Segmentation Fault - because of String Literal stored in RO Data Section
    // Trying to modify RO data, results in Exception.
    //*ops1.name = 'B';
    //printf("char = %c\n",*ops1.name);

    return 0;
}