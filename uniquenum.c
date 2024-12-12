#include <stdio.h>
#include <stdbool.h>

void findUniqueNumbers(int arr[], int size) {
    printf("Unique numbers in the array are: ");
    
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check if the current number is unique
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        // Print the number if it is unique
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findUniqueNumbers(arr, size);

    return 0;
}
