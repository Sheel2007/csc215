#include <stdio.h>

// Function to add two matrices and store the result in another matrix
void addMatrices(int *matrix1, int *matrix2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Use pointer arithmetic to access elements and store the sum in the result matrix
            *(result + i * cols + j) = *(matrix1 + i * cols + j) + *(matrix2 + i * cols + j);
        }
    }
}

// Function to display a matrix
void displayMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Use pointer arithmetic to access elements and display them
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 3;

    // Declare two matrices and a result matrix dynamically
    int matrix1[3][3], matrix2[3][3], result[3][3];

    // Input elements for the first matrix
    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the matrices using the function
    addMatrices(&matrix1[0][0], &matrix2[0][0], &result[0][0], rows, cols);

    // Display the matrices and their sum
    printf("\nMatrix 1:\n");
    displayMatrix(&matrix1[0][0], rows, cols);

    printf("\nMatrix 2:\n");
    displayMatrix(&matrix2[0][0], rows, cols);

    printf("\nSum of Matrices:\n");
    displayMatrix(&result[0][0], rows, cols);

    return 0;
}
