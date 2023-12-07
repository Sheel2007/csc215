#include <stdio.h>

int main() {
    int number;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Display in decimal, octal, and hexadecimal notation
    printf("Decimal: %d\n", number);
    printf("Octal: %o\n", number);
    printf("Hexadecimal: %x\n", number);

    return 0;
}
