#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char targetChar) {
    int length = strlen(str);
    int count = 0;

    // Loop through each character in the string
    for (int i = 0; i < length; i++) {
        // Check if the current character is the target character
        if (str[i] == targetChar) {
            // Increment the count
            count++;
        }
    }

    return count;
}

int main() {
    char inputString[100], targetChar;

    // Input string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  // Remove the newline character if present

    // Input character to count occurrences
    printf("Enter the character to count occurrences: ");
    scanf(" %c", &targetChar);

    int occurrences = countOccurrences(inputString, targetChar);

    // Output result
    printf("Number of occurrences of '%c' in the string: %d\n", targetChar, occurrences);

    return 0;
}
