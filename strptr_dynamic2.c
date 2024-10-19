#include <stdio.h>
#include <stdlib.h>

struct t
{
	int age;
	float weight;
};

int main()
{
	struct t *ptr ;
	int i,n;
	printf("enter n:");
	scanf("%d",&n);
	ptr = (struct t *)malloc(n * sizeof(struct t));
	for(i = 0;i<n;i++)
	{
     printf("enter age %d:",i);
	 scanf("%d",&(ptr+i)->age);
	 printf("enter weight %d:",i);
	 scanf("%f",&(ptr+i)->weight);
	}
	for(i = 0;i<n;i++)
	{
     printf("age %d:\n",(ptr+i)->age);
	 printf("weight %f:\n",(ptr+i)->weight);
	}
	return 0;
}
