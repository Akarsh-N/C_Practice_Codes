#include <stdio.h>
#include <stdint.h>

int main()
{
    uint32_t a = 0x12345678;
    unsigned char *pByte;
    pByte = (unsigned char *) &a;
    printf("%p %p %p %p\n",pByte,pByte+1,pByte+2,pByte+3);
    printf("0x%X 0x%X 0x%X 0x%X\n",pByte[0],pByte[1],pByte[2],pByte[3]);
    a = (pByte[0] << 24) | (pByte[1] << 16) | (pByte[2] << 8) | (pByte[3]);
    printf("0x%X\n",a);
    return 0;
}
