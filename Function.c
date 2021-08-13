#include <stdio.h>

int sum(int a, int b) /*With argument & Return Value*/
{
    a=5;
    b=6;
    return a+b;
}

void printstar(int n) /*With argument & Without Return Value*/
{
    for(int i=0; i<n; i++)
    {
        printf("%c",'*');
    }
}

int takenumber() /*Without argument & With Return Value*/
{
    int i;
    printf("\nEnter a number ");
    scanf("%d",&i);
    return i;
}

void greet() /*Without argument & Return Value*/
{
    printf ("Hello Jack") ;
}



int main()
{
    int a,b,c;
    c=sum(a,b);
    printf("The sum is %d\n",c);
    printstar(10);
    c=takenumber();
    printf("The number entered is %d\n",c);
    greet();

    return 0;
}

