//A pointer which has not been initialized to anything (not even NULL) is known as wild pointer.
//The pointer may be initialized to a non-NULL garbage value that may not be a valid address.
#include <stdio.h> 

int main() 
{ 
    int *p;  /* wild pointer */
    printf("The wild pointer address of p is %p\n", p);
	
    int x = 10; 
  
    // p is not a wild pointer now 
    p = &x; 
    printf("The proper address of p is %p\n", p);
  
    return 0; 
} 
