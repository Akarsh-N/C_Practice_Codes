#include <stdio.h>

int main(void)
{
    int arr[5] = {13,24,53,84,45};
    int max = 0;
    int min = 0;
    max = min = arr[0];

    for(int i = 0; i < 5 ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Max is %d\nMin is %d\n",max,min);
    return 0;
}