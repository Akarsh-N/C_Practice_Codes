#include <stdio.h>
typedef void (*fptr)(int a,int b);

void add(int a,int b)
{
    printf("Addition of %d and %d is %d\n",a,b,a+b);
}

int func(int ptr[])
{
  int x = 20;
  printf("size of ptr is %ld\n", sizeof(ptr));  
  ptr = &x;
  printf("value of ptr is %d\n ", *ptr);  
}

int main(void)
{
    fptr funcptr;
    funcptr = add; 
    funcptr(1,2);

    int a[] = { 10, 20 , 30, 40 }; 
    printf("size of arr is %ld\n", sizeof(a));
    func(a); //func(&a[0]) //func(a+0) //address is sent always
    return 0;
}




