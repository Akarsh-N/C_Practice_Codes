#include <stdio.h>
#include <math.h>

long long convertDecimalToBinary(int n);
long long convertDecimalTohexadec(int n);
long long convertDecimalTooctal(int n);

int main(void)
{
   int n = 0;
   long long result = 0;

   printf("Enter a decimal number: ");
   scanf("%d", &n);
   result = convertDecimalToBinary(n);
   printf("%d in decimal = 0b%lld to binary\n", n , result);
   result = convertDecimalTohexadec(n);
   printf("%d in decimal = 0x%lld to hexadecimal\n", n , result);
   result = convertDecimalTooctal(n);
   printf("%d in decimal = O%lld to Octal\n", n , result);
   return 0;
}

long long convertDecimalToBinary(int n){
   long long binaryNumber = 0;
   int remainder, i=1;

   while(n != 0) {
     remainder = n%2;
     n = n / 2;
     binaryNumber += remainder * i;
     i = i * 10;
   }
   return binaryNumber;
}

long long convertDecimalTohexadec(int n){
   long long hexNumber = 0;
   int remainder, i=1;

   while(n != 0) {
     remainder = n%16;
     n = n / 16;
     hexNumber += remainder * i;
     i = i * 10;
   }
   return hexNumber;
}

long long convertDecimalTooctal(int n){
   long long OctNumber = 0;
   int remainder, i=1;

   while(n != 0) {
     remainder = n%8;
     n = n / 8;
     OctNumber += remainder * i;
     i = i * 10;
   }
   return OctNumber;
}