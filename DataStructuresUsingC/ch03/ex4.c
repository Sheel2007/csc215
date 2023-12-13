#include <stdio.h>

int main() {
    // Example array of integers
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);

    // Display the array
    printf("Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Calculate the sum of the squares
    int sumSquares = 0;
    for (int i = 0; i < size; ++i) {
        sumSquares += array[i] * array[i];
    }

    // Display the result
    printf("Sum of Squares: %d\n", sumSquares);

    return 0;
}
