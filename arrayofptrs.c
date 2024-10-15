#include <stdio.h>

char *names[3];

int main(void)
{
	names[0] = "akarsh";
	names[1] = "niranjan";
	names[2] = "gurukrishna";

	char *p, **p1;
    int i = 0;
    for (i = 0; i < 3; i++)
    {
       printf("%s\n",names[i]);
	}

    printf("\n");
	p1 = names;
	for (i = 0; i < 3; i++)
    {
       p1 = names + i;
       p = *p1;
       while(*p != '\0')
       {
           printf("%c ",*p);
           p = p+1;
       }
       printf("\n");
	}
    return 0;
}
