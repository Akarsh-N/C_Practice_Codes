#include <stdio.h>
#include <string.h>

int linearSearchString(char *arr[], int size, const char *target) 
{
    for (int i = 0; i < size; i++) 
    {
        if (strcmp(arr[i], target) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int main() {
    char *names[] = {"Alice", "Bob", "Charlie", "David", "Eve"};
    int size = sizeof(names) / sizeof(names[0]);
    const char *target = "Charlie";

    int result = linearSearchString(names, size, target);
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
