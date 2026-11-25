#include<stdio.h>
int main(){
    float a, b, c;
    float root1, root2;
    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f",&a, &b, &c);
    root1 = (-b + (b * b - (4 * a * c)/(2 * a)));
    root2 = (-b - (b * b - (4 * a * c)/(2 * a)));
    printf("Roots: %.2f and %.2f\n",root1, root2);
    return 0;


}