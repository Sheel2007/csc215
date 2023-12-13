#include <stdio.h>

int main() {
    // Example two-dimensional array of integers
    int array[2][3] = {
        {1, 3, 5},
        {2, 4, 6}
    };

    // Calculate the number of rows and columns
    int rows = sizeof(array) / sizeof(array[0]);
    int cols = sizeof(array[0]) / sizeof(array[0][0]);

    // Display the array
    printf("Array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum and the mean
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += array[i][j];
        }
    }

    double mean = (double)sum / (rows * cols);

    // Display the results
    printf("Sum of elements: %d\n", sum);
    printf("Mean of elements: %.2f\n", mean);

    return 0;
}
