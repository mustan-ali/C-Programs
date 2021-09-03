#include <stdio.h>

int function1(int array1[]) //Passing Array as Parameter
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array1[i]);
    }
    array1[0] = 99; //If you change any value here, It gets reflected in main()
    return 0;
}

void function2(int *ptr) //Passing Array by Declaring a pointer in the functionto hold base address of the array
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr + i));
    }
    *(ptr+2)=100;
}

int main()
{
    int arr[] = {23, 12, 4, 32};
    printf("The value at index 0 is %d\n", arr[0]);
    function1(arr);
    printf("The value at index 0 is %d\n", arr[0]);

function2(arr);
function2(arr);

    return 0;
}
