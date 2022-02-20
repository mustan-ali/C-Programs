#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i, len, temp=0, flag=0;

    printf("Enter a string:");
    scanf("%s", str);

    len = strlen(str)-1;

    for(i=0; i < len ; i++)
    {
        if(str[i] != str[len-i])
        {
            temp = 1;
        }
    }

    if (temp==0)
    {
        printf("String is a palindrome");
    }
    else
    {
        printf("String is not a palindrome");
    }

    return 0;
}
