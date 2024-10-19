#include <stdio.h>

// Function prototypes
void option1() { printf("Option 1 selected\n"); }
void option2() { printf("Option 2 selected\n"); }
void option3() { printf("Option 3 selected\n"); }

int main() {
    // Array of function pointers
    void (*options[3])() = { option1, option2, option3 };

    int choice;

    printf("Enter option (1-3): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        options[choice - 1]();  // Call the selected function
    } else {
        printf("Invalid option\n");
    }

    return 0;
}
