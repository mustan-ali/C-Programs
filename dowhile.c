#include <stdio.h>
int main()
{
    int num = 0;

    do
    {
        num = num + 1;
        printf("%d\n", num);
    } while (num < 20);

    return 0;
}
