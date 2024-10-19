#include <stdio.h>

int main()
{
	int h,i,j;
	printf("Enter the height:");
	scanf("%d",&h);

	for(i = 1; i <= h ; i++)
	{
		for(j = i; j >= 1; j--) //for(j = i; j > 0; j--)
		{
			printf("%d\t" , j );
		}
		printf("\n\n");
	}

    for(i = 1; i <= h ; i++)
	{
		for(j = i; j > 0; j--)
		{
			printf("%c\t" , '*' );
		}
		printf("\n");
	}
	return 0;
}
