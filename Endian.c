#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t data = 0xAABBCCDD;
    uint8_t *val = (uint8_t *)&data;

    if(*val == 0xAA)
    {
        printf("Big Endian 0x%X\n", *val);
    }
    else
    {
        printf("Little Endian 0x%X\n",*val);
    }

    uint32_t value = 0;
    printf("Before Changing Endianness: 0x%X\n",data);
    value = ((data & 0xFF000000) >> 24u) + ((data & 0x00FF0000) >> 8u) + ((data & 0x000000FF) << 24u) + ((data & 0x0000FF00) << 8u);
    printf("After Changing Endianness: 0x%X\n",value);

    unsigned int num = 0x12345678;
    unsigned char *ptr;
    ptr = (unsigned char *)&num;
    printf("0x%x\n",ptr[0]);
    printf("0x%x\n",ptr[1]);
    printf("0x%x\n",ptr[2]);
    printf("0x%x\n",ptr[3]);

    unsigned short *ptr1;
    ptr1 = (unsigned short *)&num;
    printf("0x%x\n",ptr1[0]);
    printf("0x%x\n",ptr1[1]);

    return 0;
}