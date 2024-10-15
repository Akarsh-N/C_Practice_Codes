#include <stdio.h>
#include <string.h>
   
int main() 
{ 
    char names[] = "amit";
  
    printf("sizeof of names: %ld\n", sizeof(names)); //5 bytes
    printf("%s\n", names); 

    for (int i = 0; i < strlen(names); i++)
    { 
       printf("%c\n", *(names + i)); // printf("%c\n", names[i]);
	} 
    
    char *names1[] = { 
        "amit", 
        "bmar", 
        "cnkt", 
        "dkhl"
    }; 
  
    for (int i = 0; i < 4; i++)
    { 
       printf("%s\n", names1[i]); 
	   printf("%c\n", *names1[i]); //first chars of each names
	   printf("address of %d is %p\n", i+1 , names1[i]); //address of first characters
	}

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
          printf("%c ", *(names1[i] + j));// *(*(names1 + i)  + j)
        }
      printf("\n");
    } 

    return 0;
} 
