#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint16_t data = 0x4F63;
    data &= ~(0x3F << 5);
    printf("0x%X\n",data);
    data |= (0x3E << 5);
    printf("0x%X\n",data);
    return 0;
}
