#include <stdio.h>
#include <math.h>
#include <string.h>

int convertBinaryToDecimal(long long n);
int hexToDec(char hex[]);
int octalToDec(char octal[]);

int main(void)
{
    long long n;
    char hexNum[20];
    char octalNum[20];
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal\n", n, convertBinaryToDecimal(n));
    
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexNum);
    printf("Decimal equivalent: %d in hex\n", hexToDec(hexNum));

    printf("Enter an octal number: ");
    scanf("%s", octalNum);
    printf("Decimal equivalent: %d in octal\n", octalToDec(octalNum));
    return 0;
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int hexToDec(char hex[]) {
    int len = strlen(hex);
    int base = 1; // 16^0
    int decVal = 0;

    // '0' is a character literal with an ASCII value of 48.
    // Subtracting '0' from a digit character gives us the numerical value of the digit. For example:
    // '0' - '0' = 0 => 48 - 48
    // '1' - '0' = 1 => 49 - 48
    // '9' - '0' = 9 => 50 - 48

    // Process each hex digit from right to left
    for (int i = len - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decVal += (hex[i] - '0') * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decVal += (hex[i] - 'A' + 10) * base;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decVal += (hex[i] - 'a' + 10) * base;
        }
        base *= 16;
    }
    return decVal;
}

int octalToDec(char octal[]) {
    int len = strlen(octal);
    int base = 1; // 8^0
    int decVal = 0;

    // Process each octal digit from right to left
    for (int i = len - 1; i >= 0; i--) {
        decVal += (octal[i] - '0') * base;
        base *= 8;
    }
    return decVal;
}