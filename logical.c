#include <stdio.h>

int main()
{
    /*&& And
     || OR
     ! Not */

    int a=1, b=1;
    printf("a=%d\nb=%d\n",a,b);
    printf("a && b= %d\n", a&&b);
    printf("a ||b= %d\n", a||b);
    printf("!a= %d\n", !a);
    printf("!b= %d\n", !b);
    printf("\n");

    int A = 0, B = 1;
    printf("A=%d\nb=%d\n", A, B);
    printf("A && B= %d\n", A && B);
    printf("A ||B= %d\n", A || B);
    printf("!A= %d\n", !A);
    printf("!B= %d\n", !B);
    printf("\n");

    return 0;
}