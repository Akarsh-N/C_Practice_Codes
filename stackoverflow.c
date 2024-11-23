#include <stdio.h>
#include <stdint.h>

#define STACK_SIZE  1024     // Example stack size (adjust based on your system)
#define CANARY      0xAA     // Sentinel pattern to detect stack usage

// Stack memory buffer (simulated stack for profiling)
uint8_t stack[STACK_SIZE];

// Function to initialize stack with the sentinel pattern
void init_stack(void) {
    for (int i = 0; i < STACK_SIZE; i++) {
        stack[i] = CANARY;
    }
}

// Simulate a function that uses stack space
void dummy_function(int depth) {
    uint8_t temp[100]; // Simulated stack usage (adjust size based on needs)

    if (depth > 0) {
        dummy_function(depth - 1); // Recursive call to increase stack usage
    }
    
    temp[0] = 0; // Dummy operation to avoid compiler optimizations
}

// Function to calculate used stack space by scanning the canary pattern
int calculate_stack_usage(void) {
    int used_bytes = 0;
    for (int i = 0; i < STACK_SIZE; i++) {
        if (stack[i] != CANARY) {
            used_bytes = i + 1; // Track the deepest used position
        }
    }
    return used_bytes;
}

int main() {
    init_stack();           // Initialize stack with canary pattern
    dummy_function(5);      // Run a function that uses stack

    int used_stack = calculate_stack_usage();
    int free_stack = STACK_SIZE - used_stack;

    printf("Used stack space: %d bytes\n", used_stack);
    printf("Free stack space: %d bytes\n", free_stack);

    return 0;
}
