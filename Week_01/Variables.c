#include <stdio.h>
int main()
{
    int a;
    unsigned long long int b;
    float c;
    char d;
    scanf("%d",&a);
    scanf("%llu",&b);
    scanf("%f",&c);
    getchar();
    scanf("%c",&d);
    // getc(d);

    printf("%d\n", a);
    printf("%llu\n", b);
    printf("%.2f\n", c);
    printf("%c", d);
    return 0;
}