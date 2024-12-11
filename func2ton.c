#include <stdio.h>

int func2n(int n)
{
    return (1 << n);
}

void endian()
{
	int data = 0xAABBCCDD;
	int newdata = 0;
	
	newdata  = (data & 0xFF000000) >> 24;
	newdata |= (data & 0x00FF0000) >> 8;
	newdata |= (data & 0x0000FF00) << 8;
	newdata |= (data & 0x000000FF) << 24;
	printf("0x%X\n",newdata);
}

int main(void)
{
    int a = func2n(2);
    printf("%d\n",a);
    endian();
    return 0;
}