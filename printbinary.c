#include <stdio.h>

void printBinary(int n) {
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}

int main() {
    int number = 42; // Replace with the integer you want to print in binary format
    printf("Binary representation: ");
    printBinary(number);
    printf("\n");
    return 0;
}
