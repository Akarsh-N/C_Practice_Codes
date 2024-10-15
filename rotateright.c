#include <stdio.h>

void rotate_right(int arr[],int rotateby, int lengthofarr);

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < length ; i++)
    {
    printf("%d \t",arr[i]);
    }
    printf("\n");

    rotate_right(arr,2,length);

    for(int i = 0; i < length ; i++)
    {
    printf("%d \t",arr[i]);
    }
    printf("\n");

    return 0;
}

void rotate_right(int arr[],int rotateby, int lengthofarr)
{
    for(int i = 0; i < rotateby ; i++)
    {
        int temp = arr[lengthofarr - 1];
        for(int j = (lengthofarr -1) ; j > 0; j--)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}