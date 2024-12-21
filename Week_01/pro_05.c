// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n<=5000){
//         printf("Someting from New Market\n");
//     }
//     else if(n<=10000){
//         printf("Levis Bag");
//     }
//     else if(n<=20000){
//         printf("Gucci Bag");
//     }
//     else{
//         printf("Gucci Bag\n");
//         printf("Gucci Belt");
//     }

// }

#include<stdio.h>
void swap(int *a,int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    return;
}
int main(){
    int a=10,b=5;
    printf("after swap a=%d and b=%d\n",a,b);
    // a = a+b;
    // b=a-b;
    // a=a-b;
    swap(&a,&b);

    printf("Befor swap a=%d and b=%d\n", a, b);

    return 0;
}