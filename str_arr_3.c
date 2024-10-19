#include <stdio.h>

struct Employee
{
	char names[30];
	int salary;
};

void show (struct Employee s);

int main()
{
	struct Employee e;


    printf("enter name:");
	scanf("%s",e.names);
	printf("enter salary:");
	scanf("%d",&e.salary);
	show(e);

  return 0;
}

void show (struct Employee s)
{
     printf("name is %s\n",s.names);
	 printf("salary is %d\n",s.salary);
}


