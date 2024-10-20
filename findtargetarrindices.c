#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main(void)
{
    int arr[5] = { 1 , 5 , 6 , 7 , 11};
    int returnsize;

    int *arr1 = twoSum(arr,5,11,&returnsize);
    printf("%d %d %d\n",arr1[0],arr1[1],returnsize);
    free(arr1);
    return 0;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize = 2;

    int *array = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 1 + i; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                array[0] = i;
                array[1] = j;
                return array;
            }
        }
    }
    return NULL;
}
