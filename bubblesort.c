#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,j,size,temp;
    printf("Enter the sizeof arr:");
    scanf("%d",&size);
    int arr[size];

    // memset(arr,0, size * sizeof(int));

    printf("Enter the %d elements:\n",size);
    for(i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0 ; i < size - 1; i++)
    {
        for(int j = 0; j < size-i-1 ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Bubble sorted array:\n");
    for(i=0 ; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}