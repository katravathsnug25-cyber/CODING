#include<stdio.h>
int main() {
    int m, n;
    printf("enter the rows: \n ");
    scanf("%d",&m);
    printf("enter the colums: \n");
    scanf("%d",&n);
    int A[m][n] ,B[m][n],C[m][n];
    printf("enter the numberA: \n");
    for(int i=0;i<m;i++){
        for(int j = 0; j<n; j++){
            scanf("%d",&A[i][j]);

        }
    }
    printf("enter the numberB: \n");
    for(int i =0; i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&B[i][j]);
        }
    }
    // printf("addition of both matrix : ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",C[i][j]);


        }
        printf("\n");
    }
    return 0;

}