#include <stdio.h>

void ChangeValue(int *address) //Call by Reference
{
    *address = 60;
}
int main()
{
    int a = 30, b = 40;
    printf("The value of a is %d\n", a);
    ChangeValue(&a);
    printf("The value of a is %d\n", a);
    return 0;
}
