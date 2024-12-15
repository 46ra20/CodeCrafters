#include<stdio.h>
void is_Even(int n){
    if(n%2==0){
        printf("Even\n");
        return;
    }
    printf("Odd\n");
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    is_Even(n);
    return 0;
}