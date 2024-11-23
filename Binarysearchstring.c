#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void *a, const void *b) 
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int binarySearchString(char *arr[], int size, const char *target) 
{
    int left = 0, right = size - 1;
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        int cmp = strcmp(arr[mid], target);
        if (cmp == 0)
            return mid;
        else if (cmp < 0)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    char *names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int size = sizeof(names) / sizeof(names[0]);
    const char *target = "David";

    // Sort the array of names
    qsort(names, size, sizeof(char *), compareStrings);

    int result = binarySearchString(names, size, target);
    if (result != -1) 
    {
        printf("Name %s found at index %d.\n", target, result);
    } 
    else 
    {
        printf("Name %s not found.\n", target);
    }

    return 0;
}
