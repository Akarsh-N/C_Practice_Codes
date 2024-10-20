#include <stdio.h>

void swap(int *xp, int *yp);

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int a[],int len)
{
    int i,j,min_index = 0;
    for(i = 0; i < len - 1; i++)
    {
        min_index = i;
        for(j = i+1; j < len; j++)
        {
          if(a[j] < a[min_index])
          {
            min_index = j;  
          }
        }
        
        if(min_index!= i)
        swap(&a[min_index],&a[i]);
    }
}

int main(void)
{
    int arr[] = {91,67,19,45,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,n);
    
    for(int i = 0; i < n; i++)
    printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
