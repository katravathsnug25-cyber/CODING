#include <stdio.h>
int main() {
    int terms, first = 0, second = 1, next, i;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &terms);

     
    if (terms < 0) {
        printf("Error! Number of terms must be a non-negative integer.\n");
    } else {
        printf("Fibonacci Series: ");
        for (i = 0; i < terms; i++) {
            if (i == 0) {
                printf("%d", first);
                continue;
            }
            if (i == 1) {
                printf("%d", second);
                continue;
            }
            next = first + second; 
            printf("%d\n", next); 
            first = second; 
            second = next; 
        }
        printf("\n");
    }

    return 0;
}