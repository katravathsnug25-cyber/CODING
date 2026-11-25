#include <stdio.h>
void main ()
{
    int x, y, temp;
    printf ("Enter two integers (x y); ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping using tempory variable: x = %d, y = %d\n", x, y);
    printf("Enter two integers(x y); ");
    scanf("%d %d", &x, &y);
    x 
}