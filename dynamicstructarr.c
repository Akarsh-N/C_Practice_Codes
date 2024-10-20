#include <stdio.h> 
#include <stdlib.h>
  
typedef struct s
{
    int arr_size;
    int arr[];
}s_t;

int main() 
{ 
    s_t str1 , *ptr;
    int desiredsize = 5;
    printf("size of structure before malloc %ld\n",sizeof(str1)); //variable array length will not be considered
    ptr = (s_t *)malloc(sizeof(s_t) + desiredsize*sizeof(int));
    ptr->arr_size = desiredsize;
    for(int i = 0;i < desiredsize; i++)
    ptr->arr[i] = i+1;

    for(int i=0;i< desiredsize;i++)
    printf("%d ",ptr->arr[i]);
    printf("\n\n");

    for(int i=0;i< desiredsize;i++)
    printf("%d ", *(ptr->arr+i));
    printf("\n");
    free(ptr);
    return 0; 
}
