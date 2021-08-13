#include <stdio.h>

int main()
{
    label:
    printf("Inside Label\n");
    goto label2;

    label2:
    printf("Outside Label\n");

    return 0;
}

