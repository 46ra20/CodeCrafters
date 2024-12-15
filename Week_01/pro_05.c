#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=5000){
        printf("Someting from New Market\n");
    }
    else if(n<=10000){
        printf("Levis Bag");
    }
    else if(n<=20000){
        printf("Gucci Bag");
    }
    else{
        printf("Gucci Bag\n");
        printf("Gucci Belt");
    }

}