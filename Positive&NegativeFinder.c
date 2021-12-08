#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("%d is Negative Number", number);
    }
    else
    {
        printf("%d is Positive Number", number);
    }

    return 0;
}
