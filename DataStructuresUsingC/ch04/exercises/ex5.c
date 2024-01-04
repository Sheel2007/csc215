#include <stdio.h>
#include <string.h>

void replaceCharacter(char str[], char oldChar, char newChar) {
    int length = strlen(str);

    // Loop through each character in the string
    for (int i = 0; i < length; i++) {
        // Check if the current character is the one to be replaced
        if (str[i] == oldChar) {
            // Replace the character with the new character
            str[i] = newChar;
        }
    }
}

int main() {
    // Example usage
    char inputString[100], oldChar, newChar;

    // Input string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';  // Remove the newline character if present

    // Input character to be replaced
    printf("Enter the character to be replaced: ");
    scanf(" %c", &oldChar);

    // Input new character
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    replaceCharacter(inputString, oldChar, newChar);

    // Output
    printf("String after replacement: %s\n", inputString);

    return 0;
}
