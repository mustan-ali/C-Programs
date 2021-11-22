#include<stdio.h>

int main()
{
    int i,j,z;
    for(i=0; i<=1; i++)
    {
        for(j=0; j<=1; j++)
        {
            for(z=0; z<=1; z++)
            {
                printf("i:%d   j:%d   z:%d\n",i,j,z);
            }
        }
    }
    return 0;
}

