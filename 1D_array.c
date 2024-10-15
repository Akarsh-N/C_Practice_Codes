#include<stdio.h>

void func(int arr[],int len);

int main()
{
  int arr[] = {1,2,3,4};
  int length = sizeof(arr)/sizeof(*arr);

  printf("Variation No.1 check in Code\n");
  for (int i = 0; i < length; i++)
  {
    printf("%d ",*(arr + i));
  }
  printf("\n");

  printf("Variation No.2 check in Code\n");
  for (int i = 0; i < length; i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n\n");

  func(arr,length);
  return 0;
}

void func(int arr[],int len) //arr will be treated as pointer within functions
{ 
  printf("Size of arr is %ld\n",sizeof(arr));
  for (int i = 0; i < len; i++)
  {
    printf("%d ",*(arr+i)); //Can be considered as pointer
  }
}