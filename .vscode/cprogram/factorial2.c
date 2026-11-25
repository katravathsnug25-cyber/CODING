#include<stdio.h>
int factorial_iterative(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    // factorial_iterative(n);
 
    printf("Factorial using iterative method = %d" , factorial_iterative(n));
    return 0;

}