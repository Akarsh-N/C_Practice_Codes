#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int binarySearchInt(int arr[], int size, int target) 
{
    int left = 0, right = size - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {34, 56, 12, 89, 23, 78};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    // Sort the array before binary search
    qsort(arr, size, sizeof(int), compare);

    int result = binarySearchInt(arr, size, target);
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
