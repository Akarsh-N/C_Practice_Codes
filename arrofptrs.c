#include <stdio.h>

int main() 
{ 
    int *ptr[5];
	int b[5] = {1,2,3,4,5};
    int i = 0; 
  
    for (i = 0; i < 5; i++)
    { 
       ptr[i] = &b[i];
	} 

	for (i = 0; i < 5; i++)
    { 
       printf("%d , %d\n", i+1 ,*ptr[i]); 
	  // printf("%d , %d\n", i+1 ,*(*(ptr +i)));
	   printf("Address of %d th position is %p\n",i + 1,ptr[i]); 
	  // printf("Address of %d th position is %p\n",i + 1,*(ptr +i));
	}
    return 0;
}
