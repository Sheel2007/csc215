#include <stdio.h>

// Function to compute the product of elements above the main diagonal
long long diagonalProduct(int *matrix, int rows, int cols) {
    long long product = 1; // Use long long to handle large products

    // Loop through each row and column above the main diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            // Use pointer arithmetic to access the element
            product *= *(matrix + i * cols + j);
        }
    }

    return product;
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

    // Compute the product of elements above the main diagonal using the function
    long long product = diagonalProduct(&matrix[0][0], rows, cols);

    // Display the result
    printf("Product of elements above the main diagonal: %lld\n", product);

    return 0;
}
