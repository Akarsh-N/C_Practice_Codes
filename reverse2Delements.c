#include <stdio.h>

int main()
{
	int row,col;
	int i,j,k,temp;
	printf("Enter the row and columns\n");
	scanf("%d %d",&row,&col);

	int a[row][col];

	printf("Enter the %d * %d matrix elements\n",row,col);
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

    for (i=0;i<row;i++)
	{
		for (j=0,k=col-1;j<k;j++,k--)
		{
			temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
		}
	}

	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}

    printf("Re Reverse the array:\n");
    for (i=0;i<row;i++)
	{
		for (j=col-1;j>=0;j--)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
