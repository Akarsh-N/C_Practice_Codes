#include <stdio.h>

void rotate_left(int arr[],int rotateby, int lengthofarr);

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < length ; i++)
    {
    printf("%d \t",arr[i]);
    }
    printf("\n");

    rotate_left(arr,2,length);

    for(int i = 0; i < length ; i++)
    {
    printf("%d \t",arr[i]);
    }
    printf("\n");

    return 0;
}

void rotate_left(int arr[],int rotateby, int lengthofarr)
{
    for(int i = 0; i < rotateby ; i++)
    {
        int temp = arr[0];
        for(int j = 0 ; j < (lengthofarr -1); j++)
        {
            arr[j] = arr[j+1];
        }
        arr[lengthofarr - 1] = temp;
    }
}