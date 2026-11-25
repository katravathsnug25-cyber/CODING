#include <stdio.h>
void main() {
    int num1, num2, max;
    int number;

    // Input two numbers to find the maximum
    printf("Enter two integers (num1 num2): ");
    scanf("%d %d", &num1, &num2);

    // Using ternary operator to find the maximum
    max = (num1 > num2) ? num1 : num2;
    printf("Maximum of %d and %d is: %d\n", num1, num2, max);

    // Input a number to check if it is even or odd
    printf("Enter an integer to check even or odd: ");
    scanf("%d", &number);

    // Using ternary operator to determine even or odd
    // % is the modulus operator that gives the remainder of division
    (number % 2 == 0) ? 
        printf("%d is Even\n", number) : 
        printf("%d is Odd\n", number);
}