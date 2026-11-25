 #include <stdio.h>

void printFibonacci(int n) {
    unsigned long long first = 0, second = 1, next;

    printf("Fibonacci Sequence: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%llu ", next);
    }
    printf("\n");
}

int main() {
    int terms ;
    printf("Enter the terms: ");
    scanf("%d",&terms);
    printFibonacci(terms);
    return 0;
}