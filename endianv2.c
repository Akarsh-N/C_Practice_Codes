#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // Write C code here
    uint16_t data = 0xABCD;
    uint32_t data1 = 0xAABBCCDD;
    uint16_t new_data = 0,new_data1 = 0; // Initializing to zero is very important
    uint32_t new_data2 = 0,var = 0; // Initializing to zero is very important
    
    new_data = (data & 0x000F) << 4;
    new_data |= (data & 0x00F0) >> 4;
    new_data |= (data & 0x0F00) << 4;
    new_data |= (data & 0xF000) >> 4;
    printf("New Data 0 is 0x%X\n",new_data);

    new_data1 = (data & 0x000F) << 8;
    new_data1 |= (data & 0x00F0) << 8;
    new_data1 |= (data & 0x0F00) >> 8;
    new_data1 |= (data & 0xF000) >> 8;
    printf("New Data 1 is 0x%X\n",new_data1);
    
    new_data2 = (data1 & 0x00FF0000) >> 8;
    new_data2 |= (data1 & 0xFF000000) >> 24;
    new_data2 |= (data1 & 0x000000FF) << 24;
    new_data2 |= (data1 & 0x0000FF00) << 8;
    printf("New Data 2 is 0x%X\n",new_data2);

    var |=  (data1 & 0x000000FF) << 8;
    var |=  (data1 & 0x0000FF00) >> 8;
    var |=  (data1 & 0x00FF0000) << 8;
    var |=  (data1 & 0xFF000000) >> 8;
    printf("New variable data is 0x%X\n",var);

    return 0;
}
