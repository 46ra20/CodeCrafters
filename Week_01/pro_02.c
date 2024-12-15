#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d+%d=%d\n",n,m,n+m);
    printf("%d-%d=%d\n",n,m,n-m);
    printf("%d*%d=%d\n",n,m,n*m);
    printf("%d/%d=%.2f\n",n,m,n/(m*1.0));
}