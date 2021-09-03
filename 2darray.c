#include <stdio.h>

int main()
{

    int marks[2][3];

    //  int marks[2][3]={{10,58,31},{7,3,2}};

    /*  marks[0][0]=10;
    marks[0][1]=58;
    marks[0][2]=31;
    marks[1][0]=7;
    marks[1][1]=3;
    marks[1][2]=2;
*/

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks of student %d , %d: ", i, j, marks[i][j]);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Marks of student %d , %d is %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}
