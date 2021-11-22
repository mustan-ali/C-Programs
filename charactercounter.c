#include<stdio.h>

int main()
{
    int i=0;
    printf("Enter msg\n");

    while(getche()!= '\r')
    {
        i++;
    }
    printf("\n%d",i);

    return 0;
}
