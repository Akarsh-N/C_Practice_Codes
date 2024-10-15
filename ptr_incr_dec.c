#include <stdio.h>

//   [],(),->,. ---L to R  higher priority
//   ++,--,*,& --- R to L  lower in order
//   Prefix ++ or -- has higher priority than dereference '*'
//   Postfix ++ or -- has higher priority than Prefix ++ or -- or '*'

int main(void) 
{ 
    char a[] = { 'A', 'Z', 'X', 'F' }; 
    char* ppp = &a[0]; 
    *ppp++; // Line 1 //address increment  
	printf("%c\n", *ppp);
    printf("%c %c \n", *++ppp, --*ppp); // Line 2 //Right to left associativity 

    int b[] = {3,6,9};
    int *ptr1 = (int *)&b;
    printf("%d\n", *++ptr1); // printf("%d", *(++ptr1));

    int c[] = {3,6,9};
    int *ptr2 = (int *)&c;
    printf("%d\n", ++*ptr2); // printf("%d", ++(*ptr2));

    // Push value onto stack i.e *ptr++ = value;
    int d[] = {3,6,9};
    int *ptr3 = (int *)&d;
    printf("%p\n", ptr3);
    printf("%d\n", *ptr3++);
    printf("%p\n", ptr3);
    printf("%d\n", *ptr3);

    int e[] = {3,6,9};
    int *ptr4 = (int *)&e;
    printf("%p\n", ptr4);
    printf("%d\n", (*ptr4)++);
    printf("%p\n", ptr4);
    printf("%d\n", *ptr4);

    // pop top of stack into value i.e value = *--p
    int f[] = {3,6,9};
    int *ptr5 = (int *)&f[1];
    printf("%d\n", *--ptr5); // printf("%d", *(--ptr5));

    int g[] = {3,6,9};
    int *ptr6 = (int *)&g;
    printf("%d\n", --*ptr6); // printf("%d", --(*ptr6));

    int h[] = {3,6,9};
    int *ptr7 = (int *)&h[1];
    printf("%p\n", ptr7);
    printf("%d\n", *ptr7--);
    printf("%p\n", ptr7);
    printf("%d\n", *ptr7);

    int i[] = {3,6,9};
    int *ptr8 = (int *)&i;
    printf("%p\n", ptr8);
    printf("%d\n", (*ptr8)--);
    printf("%p\n", ptr8);
    printf("%d\n", *ptr8);

    return 0;
} 
