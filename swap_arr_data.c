#include <stdio.h>

int main(void)
{
    int arr[5] = {13,24,53,84,45};
    int temp = 0;
    int len = sizeof(arr)/sizeof(arr[2]);

    for(int i = 0,j = len - 1; i < j ; i++ , j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0 ; i < len ; i++)
    {
    printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}