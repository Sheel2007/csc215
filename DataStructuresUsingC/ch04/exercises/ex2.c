#include <stdio.h>
#include <string.h>

void concatenateStrings(char result[], const char str1[], const char str2[], int n) {
    // Copy the first n characters of str1 to result
    strncpy(result, str1, n);

    // Null-terminate the result string
    result[n] = '\0';

    // Concatenate str2 to result
    strcat(result, str2);
}

int main() {
    // Example usage
    char str1[100], str2[100], result[200];
    int n;

    // get first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the newline character if present

    // get second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove the newline character if present

    // get n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    concatenateStrings(result, str1, str2, n);

    // Output
    printf("Concatenated string: %s\n", result);

    return 0;
}
