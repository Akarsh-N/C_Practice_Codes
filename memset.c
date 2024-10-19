#include <stdio.h> 
#include <string.h> 
  
void printArray(int arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d ", arr[i]); 
      printf("\n");
} 
  
int main() 
{ 
    int n = 10; 
    int arr[n]; 
  
    // Fill whole array with 100. 
    memset(arr, 10 , n*sizeof(arr[0])); //byte wise it starts assigning the value 10.
    printf("Array after memset()\n");
    printArray(arr, n); 

    return 0; 
} 
//o/p: 0a0a0a0a  0a0a0a0a
//o/p: 168430090 168430090 168430090 168430090 168430090 168430090 168430090 168430090 168430090 168430090 
