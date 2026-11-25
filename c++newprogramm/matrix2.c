#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("enter the m: ");
    scanf("%d %d",&m,&n);
    printf("enter the n: ");
    scanf("%d %d",&p,&q);
    int A[m][n], B[p][q] ,C[m][q];
    printf("enter a: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    printf("enter the b: \n");
    for(int i = 0;i<p;i++){
        for(int j =0 ;j<q;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            C[i][j] = 0;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    printf("matric : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}