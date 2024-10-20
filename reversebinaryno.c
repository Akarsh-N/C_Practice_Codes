#include <stdio.h>
#include <stdint.h>

unsigned int reverseBits(unsigned int num)
{
    unsigned int numOfBits = sizeof(num) * 8; // Number of bits in an integer
    unsigned int reversedNum = 0;

    for (int i = 0; i < numOfBits; i++) {
        if (num & (1 << i)) {
            reversedNum |= 1 << (numOfBits - 1 - i);
        }
    }
    return reversedNum;
}

int main(void) 
{
    unsigned int number;

    printf("Enter an integer: ");
    scanf("%u", &number);
    unsigned int reversedNumber = reverseBits(number);

    printf("Original number: %u\n", number);
    printf("Reversed number: 0x%x\n", reversedNumber);
    return 0;
}
