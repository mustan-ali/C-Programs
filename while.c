#include <stdio.h>

int main()
{
    int i=0,num;

    printf("Enter Number\n");
    scanf("%d",&num);

    while(i<num){
        printf("%d\n",i);
        i=i+1;
    }

    return 0;
}

