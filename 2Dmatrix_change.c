#include <stdio.h>
#include <stdlib.h>

// Function to dynamically allocate a matrix
int** allocate_matrix(int rows, int cols) {
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to free a dynamically allocated matrix
void free_matrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to print the matrix
void print_matrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Step 1: Create and populate the 4x4 matrix
    int rows_4x4 = 4, cols_4x4 = 4;
    int** matrix_4x4 = allocate_matrix(rows_4x4, cols_4x4);

    // Initialize the 4x4 matrix with some data
    int counter = 1;
    for (int i = 0; i < rows_4x4; i++) {
        for (int j = 0; j < cols_4x4; j++) {
            matrix_4x4[i][j] = counter++;
        }
    }

    printf("Original 4x4 Matrix:\n");
    print_matrix(matrix_4x4, rows_4x4, cols_4x4);

    // Step 2: Create the 6x6 matrix and initialize it to 0
    int rows_6x6 = 6, cols_6x6 = 6;
    int** matrix_6x6 = allocate_matrix(rows_6x6, cols_6x6);

    for (int i = 0; i < rows_6x6; i++) {
        for (int j = 0; j < cols_6x6; j++) {
            matrix_6x6[i][j] = 0;  // Initialize all elements to 0
        }
    }

    // Step 3: Copy the 4x4 matrix into the center of the 6x6 matrix
    for (int i = 0; i < rows_4x4; i++) {
        for (int j = 0; j < cols_4x4; j++) {
            matrix_6x6[i + 1][j + 1] = matrix_4x4[i][j];
        }
    }

    printf("\nUpdated 6x6 Matrix:\n");
    print_matrix(matrix_6x6, rows_6x6, cols_6x6);

    // Step 4: Free the memory for the 4x4 matrix
    free_matrix(matrix_4x4, rows_4x4);
    
    // Step 5: Free the memory for the 6x6 matrix
    free_matrix(matrix_6x6, rows_6x6);

    return 0;
}
