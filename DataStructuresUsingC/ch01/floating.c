#include <stdio.h>
#include <math.h>

int main() {
    double number;

    // Input the floating-point number
    printf("Enter a floating-point number: ");
    scanf("%lf", &number);

    // Extract the integral part and display the rightmost digit
    int integralPart = (int)number;  // Casting to int to get only the integral part
    int rightmostDigit = abs(integralPart % 10);  // Taking the last digit

    // Output the result
    printf("Rightmost digit of the integral part: %d\n", rightmostDigit);

    return 0;
}

