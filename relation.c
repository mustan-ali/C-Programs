#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter num a\n");
    scanf("%d", &a);

    printf("Enter num b\n");
    scanf("%d", &b);

    printf("a==b= %d\n", a == b);
    printf("a!=b= %d\n", a != b);
    printf("a>b= %d\n", a > b);
    printf("a<b= %d\n", a < b);
    printf("a>=b= %d\n", a >= b);
    printf("a<=b= %d\n", a <= b);
    return 0;
}