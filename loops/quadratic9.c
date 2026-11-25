#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    double discriminant, realpart, imagpart, root1, root2;
    printf("Enter coefficiets a, b and c: ");
    scanf("%1f %1f %1f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same: x1 = x2 = %.61f\n", root1);
    } else {
        if (discriminant > 0){
            root1 = (-b + sqrt(discriminant))/(2 * a);
            root2 = (-b - sqrt(discriminant))/ (2 * a);
            printf("Roots are real and different: x1 = %.61f, x2 =%.61f\n", root1, root2);
        } else {
        realpart = -b / (2 * a);
        imagpart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: x1 = %.2f + %.2fi, x2 = %.2f - 5.61fi\n",realpart, imagpart, realpart, imagpart);
        }
    }
    return 0;
}