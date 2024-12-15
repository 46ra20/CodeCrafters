#include<stdio.h>
void is_Posative(int n){
    if(n>=0){
        printf("Posative\n");
        return;
    }
    printf("Nagetive\n");
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    is_Posative(n);
    return 0;
}