#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000];
    int vowels = 0;

    // Input text
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);

    // Loop through each character in the text
    for (int i = 0; text[i] != '\0'; ++i) {
        // Convert the character to lowercase for case-insensitive comparison
        // tolower is from ctype.h
        char c = tolower(text[i]);

        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }
    }

    // Output the result
    printf("Number of vowels: %d\n", vowels);

    return 0;
}

