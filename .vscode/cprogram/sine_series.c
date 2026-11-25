#include<stdio.h>
#include<math.h>
double mysine(double x) {
    double term, sum;
    int i, n;
    sum = 0;
    term = x;
    n = 100;
    for (i = 1; i<=n; i++) {
        sum += term;
        term *= -1 * x * x /(2* i * (2 * i + 1));
    }
    return sum;
}
void main() {
    double x;
    printf("Enter x (in degrees): ");
    scanf("%1lf", &x);
    x = (M_PI/180) * x;
    printf("Our value of sin(%1lf) = %1lf\n", x, mysine(x));
    printf("Value of sine(%1lf) from math library = %1lf\n", x, sin(x));
}