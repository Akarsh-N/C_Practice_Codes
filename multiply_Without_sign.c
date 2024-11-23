#include <stdio.h>

int multiply(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int multiply1(int a, int b) {
    if (b == 0) return 0;
    return a + multiply1(a, b - 1);
}

int main() {
    int a = 5;
    int b = 4;
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    printf("%d * %d = %d\n", a, b, multiply1(a, b));

    int c = 5;
    int result = c << 2; // Equivalent to a * 4
    printf("5 * 4 = %d\n", result);
    return 0;
}






