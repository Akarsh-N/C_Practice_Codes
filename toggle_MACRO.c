#include <stdio.h>

#define TOGGLE(data,bit) (data ^= (0x01 << bit)) 

int main(void)
{
    unsigned int data = 0xF8;
    printf("0x%X\n",TOGGLE(data,3));
	return 0;
}
