#include<stdio.h>

int inputmins(void)
{
    int hours, minutes;
    scanf("%d:%d",&hours, &minutes);
    return(hours*60 + minutes);
}

void main(void)
{
    int min1, min2;

    printf("Type first time (eg. 3:22): ");
    min1 = inputmins();
    printf("Type second time (eg. 8:30): ");
    min2 = inputmins();

    if(min2>=min1)
    {
        printf("Difference is %d minutes.",min2-min1);
    }
    else if(min1>=min2)
    {
        printf("Difference is %d minutes.",min1-min2);
    }
}



