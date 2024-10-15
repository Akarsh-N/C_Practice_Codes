#include <stdio.h>

char *arr[5] = {"Sunday","Monday","Tuesday","Wednesday","Thursday"};
void func(char **p);

int main() {
    // Write C code here
    char **p = arr;
    printf("Address of double pointer is %p\n",&p);
    printf("Content inside double pointer is %p\n",p); 
    printf("Double pointer after one level of deference is %p\n",*p);
    printf("Address of first array of pointers is %p\n",arr);
	printf("Content inside first array of pointers is %p\n",*arr);
    func(p);
    p = &arr[1];
    printf("Content inside double pointer is %p\n",p); 
    printf("Double pointer after one level of deference is %p\n",*p);
    printf("Address of second array of pointers is %p\n",&arr[1]);
    func(p);
    p = &arr[2];
    printf("Content inside double pointer is %p\n",p); 
    printf("Double pointer after one level of deference is %p\n",*p);
    printf("Address of third array of pointers is %p\n",&arr[2]);
    func(p);
    p = &arr[3];
    printf("Content inside double pointer is %p\n",p); 
    printf("Double pointer after one level of deference is %p\n",*p);
    printf("Address of fourth array of pointers is %p\n",&arr[3]);
    func(p);
    return 0;
}

void func(char **p)
{
   printf("Today is %s\n\n",*p); 
}
