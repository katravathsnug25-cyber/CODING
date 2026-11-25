#include<stdio.h>
int main(){
    int n,i;
    float sum=0,avg;
    int arr[100];
    printf("Enter the number of elements: ",n);
    scanf("%d",&n);
    printf("THe elements are :");
    scanf("%d",&i);
    for(i;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Average of the elements:%.2f \n",avg);
    return 0;

}