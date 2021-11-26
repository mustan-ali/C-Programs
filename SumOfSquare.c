#include <stdio.h>
#include <conio.h>

int sum(num1,num2)
{
    return(num1+num2);
}

int square(int num)
{
    return(num*num);
}

int sumsquare(int num1,int num2)
{
    return (sum(square(num1),square(num2)));
}

int main()
{
    int num1,num2;
    printf("Enter Number 1: ");
    scanf("%d",&num1);
    printf("Enter Number 2: ");
    scanf("%d",&num2);

    printf("Sum of Square is %d",sumsquare(num1,num2));
    return 0;
}




