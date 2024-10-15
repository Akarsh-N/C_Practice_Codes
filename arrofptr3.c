#include <stdio.h>

char *names[3];

int main()
{

	names[0] = "akarsh";
	names[1] = "niranjan";
	names[2] = "gurukrishna";

	char **p1; //Should be a double pointer because names is already a pointer to fetch data 
              //using names this has to be double pointer
	int i=0;
    printf("address of array pointer 0 is %p\n",&names[0]);
    printf("address of array pointer 1 is %p\n",&names[1]);
    printf("address of array pointer 2 is %p\n",&names[2]);

    printf("value inside array pointer 0 /address to name 0 is %p\n",names[0]);
    printf("value inside array pointer 1 /address to name 1 is %p\n",names[1]);
    printf("value inside array pointer 2 /address to name 2 is %p\n",names[2]);

    printf("address of p1 is %p\n",&p1);
	p1 = names;
	for (i = 0; i < 3; i++)
    {
       p1 = names + i;
       printf("%p\n",*p1);
       printf("%s\n",*p1);
	}
    return 0;
}
