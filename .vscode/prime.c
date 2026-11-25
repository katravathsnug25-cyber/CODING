#include <stdio.h>
void main () {
    int num, i, n;
    int flag;
    printf("Enter the limit (n): ");
    scanf("%d", &n);
    for (num = 2; num <= n; num++) {
        i = 2;
        flag = 1;
        while (i * i == num && flag) {
            if (num % i == 0) {
                flag = 0;
            }
            i++;
        }
        if (flag) {
            printf("\t%d", num);
        }
    }
}