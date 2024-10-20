#include <stdio.h>

int addWithoutPlus(int a, int b) {
    while (b != 0) {
        // Carry is AND of a and b, shifted left by 1
        int carry = a & b;
        
        // XOR of a and b gives the sum without the carry
        a = a ^ b;
        
        // Update b to be the carry, which is shifted left by 1
        b = carry << 1;
    }
    return a;
}

int addWithoutPlus1(int a, int b) {
    // If b is zero, return a (the result is a)
    if (b == 0)
        return a;

    // Recursive call by adding a + 1 and reducing b by 1
    return addWithoutPlus(a ^ b, (a & b) << 1);
}

int main() {
    int num1, num2;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &num1, &num2);

    int result = addWithoutPlus(num1, num2);
    printf("Sum: %d\n", result);

    result = addWithoutPlus1(num1, num2);
    printf("Sum: %d\n", result);

    return 0;
}
