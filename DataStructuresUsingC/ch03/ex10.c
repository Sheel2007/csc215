#include <stdio.h>

// Function to count non-zero elements in a 2D array
int countNonZeroElements(int *array, int rows, int cols) {
    int count = 0;

    // Loop through each element in the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Use pointer arithmetic to access the element
            if (*(array + i * cols + j) != 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int rows, cols;

    // Get array dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array dynamically
    int array[rows][cols];

    // Input array elements from the user
    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Count non-zero elements using the function
    int nonZeroCount = countNonZeroElements(&array[0][0], rows, cols);

    // Display the result
    printf("Total number of non-zero elements: %d\n", nonZeroCount);

    return 0;
}
