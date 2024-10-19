#include <stdio.h>

struct Employee
{
	char names[30];
	int salary;
};

void show (int a,struct Employee s[]);

int main()
{
    int i,n;
    printf("enter no of employees:");
    scanf("%d",&n);

	struct Employee e[n];

	for(i = 0;i < n;i++)
	{
     printf("enter name %d:",i);
	 scanf("%s",e[i].names);
	 printf("enter salary %d:",i);
	 scanf("%d",&e[i].salary);
	}

	show(n,e);

  return 0;
}


void show (int a, struct Employee s[])
{
    int i;
	for (i = 0;i < a;i++)
	{
     printf("name %d is %s\n",i,s[i].names);
	 printf("salary %d is %d\n",i,s[i].salary);
    }
}
