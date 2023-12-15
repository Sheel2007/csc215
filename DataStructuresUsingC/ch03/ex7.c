#include <stdio.h>

// Function to compute the sum of the main diagonal elements
int diagonalSum(int *matrix, int rows, int cols) {
    int sum = 0;
    // Loop through each row and column on the main diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Check if the current element is on the main diagonal
            if (i == j) {
                // Use pointer arithmetic to access the element
                sum += *(matrix + i * cols + j);
            }
        }
    }
    return sum;
}

int main() {
    int rows, cols;

    // Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a matrix dynamically
    int matrix[rows][cols];

    // Input matrix elements from the user
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute the sum of the main diagonal using the function
    int sum = diagonalSum(&matrix[0][0], rows, cols);

    // Display the result
    printf("Sum of elements on the main diagonal: %d\n", sum);

    return 0;
}
