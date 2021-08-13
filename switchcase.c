#include<stdio.h>
int main()
{
    int option;
    printf("Tax Rate Finder\n");
    printf("(1)Under 50000\n");
    printf("(2)Between 50000 to 75000\n");
    printf("(3)Above 75000\n");
    printf("Choose Option\n");
    scanf("%d",&option);

/*if (option>3 || option<1)
{
    printf("No Option Found\n");
}

else
{*/

    switch (option)
    {
    case 1:
    printf("No Tax\n");
        break;
    case 2:
        printf("Tax Rate= 10%%\n");
        break;
    case 3:
        printf("Tax Rate= 20%%\n");
        break;

    default:
        printf("No Option Found");
        break;

    }
//}
    return 0;
}
