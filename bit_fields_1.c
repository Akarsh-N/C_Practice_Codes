#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define CFG_RG_ADDRESS ((volatile uint32_t *)0x10000000U)
#define CONFIG_REGISTER  (*(volatile uint32_t *)0x10000000)

uint32_t configure_register() {
    // Clear the priority (bits 31:28), frequency (bits 15:8), and enable bit (bit 7) first
    CONFIG_REGISTER &= ~((0xF << 28) | (0xFF << 8) | (1 << 7));
    
    // Set priority to 0xA (bits 31:28)
    CONFIG_REGISTER |= (0xA << 28);
    
    // Set frequency to 0x55 (bits 15:8)
    CONFIG_REGISTER |= (0x55 << 8);
    
    // Enable the register by setting bit 7 to 1
    CONFIG_REGISTER |= (1 << 7);
    
    // Return the updated value of the register
    return CONFIG_REGISTER;
}

typedef union 
{
    struct cfgrgs
    {	
        uint32_t reserved1:7;
        uint32_t enable:1;
        uint32_t frequency:8;
        uint32_t reserved2:12;
        uint32_t priority:4;
    }cfgrgs_t;
    uint32_t value;
}config_reg_t;

int main()
{
    volatile config_reg_t *cfgrg;
    cfgrg = ( volatile config_reg_t *)(CFG_RG_ADDRESS);
   
    cfgrg->cfgrgs_t.priority = 0xA;
    cfgrg->cfgrgs_t.frequency = 0x55;
    cfgrg->cfgrgs_t.enable = 0x1;
    printf("Cfg register value is 0x%X\n",cfgrg->value);
    return 0;
}