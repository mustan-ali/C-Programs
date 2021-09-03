#include <stdio.h>

int main()
{

    int a=75;
    int* pointera=&a; //pointer pointing a
    int*pointerb=NULL;

    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*pointera);
    printf("The address of a is %p\n",&a);
    printf("The address of a is %p\n",pointera);
    printf("The address of b is %p\n",pointerb);
    printf("The address of pointer to a is %x\n",&pointera);

    return 0;
}
