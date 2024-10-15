#include<stdio.h>
 
int main()
{
    int arr[][5] = { { 3, 5, 6, 7, 9 },{2,3,4,5,6},{1,2,3,4,5} };

    printf("Variation No.1 check in Code\n");
    for(int m = 0; m < 3 ; m++)
    {
        for(int n = 0 ; n < 5; n++)
        {
            printf("%d ",arr[m][n]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Variation No.2 check in Code\n");
    for(int i = 0; i < 3 ; i++)
    {
        printf("%p %p\n", arr + i,&arr[i]);
        for(int j = 0 ; j < 5; j++)
        {
            printf("%p ", (*(arr + i) + j));
            printf("%d\n",*(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
