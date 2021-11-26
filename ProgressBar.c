#include<stdio.h>

void bar(float marks)
{
    float j;

    for(j=1; j<=marks; j++)
        printf("\xCD");
    printf("\n");
}

void main(void)
{
    char name[10];
    float subject1,subject2;
    printf("Enter your name:");
    scanf("%s",&name);

    printf("Enter Subject 1 marks: ");
    scanf("%f",&subject1);
    bar(subject1);

    printf("Enter Subject 2 marks: ");
    scanf("%f",&subject2);
    bar(subject2);
}




