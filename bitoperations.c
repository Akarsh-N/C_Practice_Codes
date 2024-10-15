#include <stdio.h>
#include <stdint.h>

void bitoperation(uint8_t pos,uint16_t val,uint8_t st,uint16_t mask);

typedef enum operation
{
    reset = 0,
    set,
    toggle,
    leftshift,
    rightshift,
    bit_extract,
    testingabit
}state;

int main()
{
    uint16_t a =  0xFFFF;
    uint16_t maskvalue = 0x1F;
    state st = testingabit;
    uint8_t position = 4;
    bitoperation(position,a,st,maskvalue);

    a = a & ~(0x07 << position); //3 bit's needs to Reset
    printf("Reset value is %0x\n",a);
    a = a | (0x07 << position); //3 bit's needs to Set
    printf("Set value is %0x\n",a);
    return 0;
}


void bitoperation(uint8_t pos,uint16_t val,uint8_t st,uint16_t mask)
{
    if(st == reset)
    {
      val = val & ~(0x01 << pos);
      printf("Reset value is %0x\n",val);
    }
    else if(st == set )
    {
      val = val | (0x01 << pos);
      printf("Set value is %0x\n",val);
    }
    else if(st == toggle )
    {
      val = val ^ (0x01 << pos);
      printf("Toggle value is %0x\n",val);
    }
    else if(st == leftshift )
    {
      val = val << pos;
      printf("Left shift value is %0x\n",val);
    }
    else if(st == rightshift )
    {
      val = val >> pos;
      printf("Right shift value is %0x\n",val);
    }
    else if(st == testingabit )
    {
      pos = 0x0001 << pos;
      val = val & pos;
      if(val == 0)
      {
        printf("Tested bit was not set\n");
      }
      else
      {
        printf("Tested bit was set\n");
      }
    }
    else if(st == bit_extract )
    {
      uint8_t shiftvalue = pos;
      val = (val >> shiftvalue) & mask;
      printf("After bit extraction value is %0x\n",val);
    }
    else
    {
        printf("Does'nt match any conditions\n");
    }
}
