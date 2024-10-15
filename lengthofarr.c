#include <stdio.h>

int arr_length(char arr[])
{
    int count = 0;
    for(int i=0; arr[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
 
int main()
{
   int array[] = {1,2,3,4,5};
   char arr[] = {'A','B','C','\0'};
   int length = sizeof(array)/sizeof(array[2]);
   printf("length of array = %d\n", length);
   printf("Size of int array = %ld\n", sizeof(array));

   int strlength = arr_length(arr);
   printf("length of char array = %d\n", strlength);
   printf("Size of char array = %ld\n", sizeof(arr));
 
   return 0;
}
