#include <stdio.h>

int add(int a, int b)
 {
 	int c = (a & b)<<1; 
	printf("value of C is %d\n", c);  
 	a = a ^ b;
	printf("Value of A is %d\n", a); 
 	if(c)
 	{
     	add(c, a);
 	}
 	else
 	{
     	return a;
 	}
 }

int main(void)
 {
    printf("%d\n", add(10, 9));
	return 0;
 }
