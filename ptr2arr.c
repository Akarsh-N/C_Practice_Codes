#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int (*ptr)[6] = NULL;
    int *p = NULL;
    ptr = &arr;
    p = arr;

    int lengthv0 = *(&arr + 1) - arr;
    int lengthv1 = (&arr)[1] - arr;
    int lengthv2 = *(ptr + 1) - p;

    printf("array = %p : &array = %p\n", arr, &arr);
    printf("array + 1 = %p : &array + 1 = %p lengthv0 = %d lengthv1 = %d lengthv2 = %d\n", arr + 1, (&arr + 1), lengthv0, lengthv1, lengthv2);
    printf("(ptr + 1) = %p\n", (ptr + 1));
    printf("p = %p : p+1 = %p\n", p , p+1);
    printf("*p = %d : *(p+1) = %d\n", *p , *(p+1));

    for(int i = 0; i < 6; i++)
    { 
    printf("%p  %d\n",&(*ptr)[i],(*ptr)[i]);
    }
    return 0;
}