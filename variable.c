 #include <stdio.h>
void main() {
    int x, y, temp;

    // Input values for x and y
    printf("Enter two integers (x y): ");
    scanf("%d%d", &x, &y);

    // Method 1: Using a temporary variable
    temp = x;
    x = y;
    y = temp;
    printf("After swapping using temporary variable: x = %d, y = %d\n", x, y);

    // Reset values
    printf("Enter two integers (x y): ");
    scanf("%d %d", &x, &y);

    // Method 2: Using arithmetic operations
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping using arithmetic operations: x = %d, y = %d\n", x, y);

    // Reset values
    printf("Enter two integers (x y): ");
    scanf("%d %d", &x, &y);

    // Method 3: Using bitwise XOR operation
    // learn more about bitwise operators in C
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After swapping using bitwise XOR operation: x = %d, y = %d\n", x, y);
}