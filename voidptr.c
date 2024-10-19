//Void pointer is a specific pointer type – void * – a pointer that points to some data location in storage,
//which doesn’t have any specific type.


//1. void pointers cannot be dereferenced. It can however be done using typecasting the void pointer
//2. Pointer arithmetic is not possible on pointers of void due to lack of concrete value and thus size.

#include <stdlib.h> 
#include <stdio.h>


int main() 
{ 
    int x = 4; 
    float y = 5.5; 
      
    //A void pointer 
    void *ptr; 
    ptr = &x; 
  
    // (int*)ptr - does type casting of void  
    // *((int*)ptr) dereferences the typecasted  
    // void pointer variable. 
    printf("Integer variable is = %d", *((int*) ptr) ); 
  
    // void pointer is now float 
    ptr = &y;  
    printf("\nFloat variable is= %f\n", *( (float*) ptr) ); 
  
    return 0; 
} 
