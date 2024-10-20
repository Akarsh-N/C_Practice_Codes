#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint32_t data1 = 0xAABBCCDD;
    uint32_t data2 = 0xAACCBBDD;
    for( uint8_t i = 0; i < 32; i++)
    {
            data1 ^= (0x01 << i);
            i++;
    }

    data2 ^= 0x55555555;
    printf("After toggle data1 is 0x%X\n",data1);
    printf("After toggle data2 is 0x%X\n",data2);
 return 0;
}