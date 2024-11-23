#include <stdio.h>

int linearSearchInt(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            return i;  // Return the index if target is found
        }
    }
    return -1;  // Return -1 if target is not found
}

int main() 
{
    int arr[] = {34, 56, 12, 89, 23, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 89;

    int result = linearSearchInt(arr, size, target);
    if (result != -1) 
    {
        printf("Integer %d found at index %d.\n", target, result);
    } 
    else 
    {
        printf("Integer %d not found.\n", target);
    }

    return 0;
}
