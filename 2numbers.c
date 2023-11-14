#include <stdio.h>

int main() {
    // Declare variables
    int number1, number2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &number1);

    printf("Enter second number: ");
    scanf("%d", &number2);

    // Add the numbers
    sum = number1 + number2;

    // Display the result
    printf("Sum: %d\n", sum);

    return 0;
}