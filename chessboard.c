#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 8; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("\xDB\xDB");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
