#include <stdio.h>

int main()
{

    int marks[4];
/*
        int marks[4]={10,58,62,18};
        int marks[]={10,58,62,18};

        marks[0]=50;
        marks[1]=83;
        marks[2]=57;
        marks[3]=97;
*/


    for(int i=1; i<5; i++)
    {
        printf("Enter marks of student %d: ",i);
        scanf("%d",&marks[i]);
    }

    for(int i=1; i<5; i++)
    {
        printf("Marks of student %d is %d\n",i,marks[i]);

    }

    /*
        printf("Marks of student 1 is %d\n",marks[0]);
        printf("Marks of student 2 is %d\n",marks[1]);
        printf("Marks of student 3 is %d\n",marks[2]);
        printf("Marks of student 4 is %d\n",marks[3]);
    */
    return 0;
}
