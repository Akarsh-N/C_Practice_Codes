// The pointer pointing to local variable doesn't 
// become dangling when local variable is static. 
#include<stdio.h> 
  
int *fun(void) 
{ 
    // x now has scope throughout the program 
    static int x = 5; 
    return &x; 
} 
  
int main(void) 
{ 
    int *p = fun(); 
     
    // Not a dangling pointer as it points 
    // to static variable. 
    printf("value is %d\n",*p); 
    return 0;
} 
