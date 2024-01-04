#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countWordOccurrences(char text[], char targetWord[]) {
    int length = strlen(text);
    int wordLength = strlen(targetWord);
    int count = 0;

    // Loop through each character in the text
    for (int i = 0; i < length; i++) {
        // Check if the current character is an alphabetic character
        if (isalpha(text[i])) {
            // Compare the substring starting from the current position
            if (strncmp(text + i, targetWord, wordLength) == 0) {
                // Increment the count if a match is found
                count++;

                // Move the index to the end of the found word to avoid double counting
                i += wordLength - 1;
            }
        }
    }

    return count;
}

int main() {
    char inputText[500], targetWord[50];

    // Input text
    printf("Enter a text: ");
    fgets(inputText, sizeof(inputText), stdin);
    inputText[strcspn(inputText, "\n")] = '\0';  // Remove the newline character if present

    // convert to lowercase
    for (int i = 0; inputText[i]; i++) {
        inputText[i] = tolower(inputText[i]);
    }

    // Input the word
    printf("Enter the word to count occurrences: ");
    scanf("%s", targetWord);

    // Convert to lowercase
    for (int i = 0; targetWord[i]; i++) {
        targetWord[i] = tolower(targetWord[i]);
    }

    int occurrences = countWordOccurrences(inputText, targetWord);

    // Output result
    printf("Number of occurrences of '%s' in the text: %d\n", targetWord, occurrences);

    return 0;
}
