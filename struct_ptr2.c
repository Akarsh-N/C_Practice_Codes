#include <stdio.h>

struct t
{
	int age;
	float weight;
};

int main()
{
	struct t *ptr , p;
	ptr = &p;
	printf("enter age:");
	scanf("%d",&ptr->age);//&ptr->age <=> &(*ptr).age  
	printf("enter weight:");
	scanf("%f",&ptr->weight);
	printf("%d\n",ptr->age); //ptr->age <=> (*ptr).age
	printf("%f\n",ptr->weight); //ptr->weight <=> (*ptr).weight
	return 0;
}
