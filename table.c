#include <stdio.h>

int main()
{
int num,i;
printf("Enter number ");
scanf("%d",&num);
/*
printf("%d * 1= %d\n",num, num * 1);
printf("%d * 2= %d\n",num, num * 2);
printf("%d * 3= %d\n",num, num * 3);
printf("%d * 4= %d\n",num, num * 4);
printf("%d * 5= %d\n",num, num * 5);
*/
for (i=0; i <= 5; i++)
{
    printf("%d * %d = %d\n",num,i,num*i);
}


return 0;
}
