#include<stdio.h> 

int main(void)
{
    char ch1 = 'c';
    char ch2 = 'a'; 

    char *const ptr = &ch1; // A constant pointer
    ptr = &ch2; // Trying to assign new address to a constant pointer. WRONG!!!! 

    return 0;
}
