#include<stdio.h>

int main()
{
  int arr[2][3][2] = {
                       {
                         {5, 10},
                         {6, 11},
                         {7, 12},
                       },
                       {
                         {20, 30},
                         {21, 31},
                         {22, 32},
                       }
                     };

  printf("Variation No.1 check in Code\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
       for (int k = 0; k < 2; k++)
       {
         printf("%d\t", *(*(*(arr + i) + j) +k));
       }
       printf("\n");
    }
  }

 printf("\nVariation No.2 check in Code\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
       for (int k = 0; k < 2; k++)
       {
         printf("%d\t", arr[i][j][k]);
       }
       printf("\n");
    }
  }
  return 0;
}
