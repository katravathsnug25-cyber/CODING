#include <stdio.h>
int is_prime(int num);
void print_primes_up_to_n(int n);
void main() {
    int n;
    printf("Enter thelimit (n): ");
    scanf("%d", &n);
    print_primes_up_to_n(n);
}
int is_prime(int num) {
    int i;
    if (num < 2) {
        return 0;
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
        return 0;
    }
}
    return 1;
}
void print_primes_up_to_n(int n) {
    int num;
    for (num = 2; num <= n; num++){
        if (is_prime(num)) {
             printf("\t%d", num);
        }
    }
}
