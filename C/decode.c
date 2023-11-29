/*
Author: Sheel Shah

Run code:
g++ decode.c
./a.out file.txt

Credit:
ChatGPT was used in refining the code to make it more concise and easier to understand.

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char base64Alphabet[64] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', /*  0 -  7 */
    'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', /*  8 - 15 */
    'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', /* 16 - 23 */
    'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', /* 24 - 31 */
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', /* 32 - 39 */
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', /* 40 - 47 */
    'w', 'x', 'y', 'z', '0', '1', '2', '3', /* 48 - 55 */
    '4', '5', '6', '7', '8', '9', '+', '/'  /* 56 - 63 */
};

// Function to decode a base64 character to its corresponding 6-bit value
int base64Decode(char c);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <base64-encoded-file>\n", argv[0]);
        return 1;
    }

    // Open the base64-encoded file for reading
    FILE *file;
    file = fopen(argv[1], "r");

    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Determine the size of the file
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    rewind(file);

    // Allocate memory for the base64-encoded buffer
    char *encodedBuffer = (char *)malloc(file_size);
    if (encodedBuffer == NULL) {
        perror("Memory allocation error");
        fclose(file);
        return 1;
    }

    // Read the base64-encoded content into the buffer
    if (fread(encodedBuffer, 1, file_size, file) != file_size) {
        perror("Error reading file");
        free(encodedBuffer);
        fclose(file);
        return 1;
    }

    // Close the file
    fclose(file);

    // Decode and print the base64-encoded content
    for (long i = 0; i < file_size; i += 4) {
        // splits into 4 characters
        char first = base64Decode(encodedBuffer[i]);
        char second = base64Decode(encodedBuffer[i + 1]);
        char third = (encodedBuffer[i + 2] == '=') ? 0 : base64Decode(encodedBuffer[i + 2]);
        char fourth = (encodedBuffer[i + 3] == '=') ? 0 : base64Decode(encodedBuffer[i + 3]);

        // Combine the 6-bit values to form the decoded bytes
        char decodedByte = (first << 2) | (second >> 4);
        printf("%c", decodedByte);

        // If there is a third base64 character, decode and print the second byte
        if (third != 0) {
            decodedByte = (second << 4) | (third >> 2);
            printf("%c", decodedByte);
        }

        // If there is a fourth base64 character, decode and print the third byte
        if (fourth != 0) {
            decodedByte = (third << 6) | fourth;
            printf("%c", decodedByte);
        }
    }

    printf("\n");

    // Free the allocated memory
    free(encodedBuffer);

    return 0;
}

// Function to decode a base64 character to its corresponding 6-bit value
int base64Decode(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A';
    } else if (c >= 'a' && c <= 'z') {
        return c - 'a' + 26;
    } else if (c >= '0' && c <= '9') {
        return c - '0' + 52;
    } else if (c == '+') {
        return 62;
    } else if (c == '/') {
        return 63;
    } else {
        // Invalid character
        return -1;
    }
}
