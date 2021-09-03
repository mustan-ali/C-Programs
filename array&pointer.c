#include <stdio.h>

int main()
{
    /*
        int a=34;
        char b='5';
        int* pointera=&a;
        char* pointerb=&b;

        printf("%d\n",pointera);
        printf("%d\n",pointera+1); //adds size of int (4 byte)
        printf("%d\n",pointera-1); //subtract size of int (4 byte)

        printf("%d\n",pointerb);
        printf("%d\n",pointerb+1); //adds size of char (1 byte)
        printf("%d\n",pointerb-1); //subtract size of char (1 byte)
    */

    int arr[]= {1,2,3,4,5,6,7};
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The address of first element of the array is %d\n",&arr[0]);
    printf("The address of first element of the array is %d\n",arr+1);
    printf("The address of second element of the array is %d\n",&arr[1]);

    printf("The value at address of first element of the array is %d\n",*(&arr[0]));
    printf("The value at address of first element of the array is %d\n",*(arr+1));
    printf("The value at address of second element of the array is %d\n",*(&arr[1]));


    return 0;
}

