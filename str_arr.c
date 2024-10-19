#include <stdio.h>

struct Employee
{
	char names[30];
	int salary;
};

int main()
{
    int i,n;

    printf("enter no of employees:");
    scanf("%d",&n);

	struct Employee e[n];

	for(i = 0;i< n;i++)
	{
     printf("enter name %d:",i);
	 scanf("%s",e[i].names);
	 printf("enter salary %d:",i);
	 scanf("%d",&e[i].salary);
	}
	for(i = 0;i < n;i++)
	{
     printf("name %d is %s\n",i,e[i].names);
	 printf("salary %d is %d\n",i,e[i].salary);
	}
	return 0;
}
