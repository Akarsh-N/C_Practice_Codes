#include <stdio.h>

int main()
{
	int h,i,j,k;

	printf("Enter the height:");
	scanf("%d",&h);

	for(i = 1; i <= h ; i++)
	{
	    for(k = i; k <= h ; k++)
	    {
	        printf("\t");
	    }
		for(j = i; j > 0; j--)
		{
			printf("%c\t" , '*' );
		}
	    for(k = i; k <= h ; k++)
	    {
	        printf("\t");
	    }
		printf("\n");
	}

	return 0;
}
