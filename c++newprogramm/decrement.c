#include<stdio.h>
int main(){
    int i=8;
    int x=0;
    int y=0;

    i=++x;
     printf("%d\n",x);
    i=x++;
     printf("%d\n",x);
    i=--y;
     printf("%d\n",y);
    i=y--;
    printf("%d\n",y);
    return 0;

}