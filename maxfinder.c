#include<stdio.h>
#include<conio.h>
int max;
int compareXY(int x,int y)
{
    if(x>y)
    {
        max=x;
    }
    else if(y>x)
    {
        max=y;
    }
}

int compareYZ(int y,int z)
{
    if(y>z)
    {
        max=y;
    }
    else if(z>y)
    {
        max=z;
    }
}

int compareZX(int z,int x)
{
    if(z>x)
    {
        max=z;
    }
    else if(x>z)
    {
        max=x;
    }
}

int main()
{
    int x,y,z;
    printf("Enter X: ");
    scanf("%d",&x);
    printf("Enter Y: ");
    scanf("%d",&y);
    printf("Enter Z: ");
    scanf("%d",&z);

    compareXY(x,y);
    compareYZ(y,z);
    compareZX(z,x);
    printf("Max: %d",max);

    return 0;
}
