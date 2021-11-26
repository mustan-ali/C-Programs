#include <stdio.h>
#include <conio.h>
#include <math.h>

float radius;  //Global Variable

float area(float radius)
{
    float spherearea;
    printf("Enter Radius: ");
    scanf("%f",&radius);
    spherearea=4 * M_PI * radius*radius;
    return spherearea;
}

int main()
{
    printf("%1.2f",area(radius));
    return 0;
}



