#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}

int main()
{
    // char str[] = {'h', 'e', 'l', 'l', '0', '\0'}; /*\0 is used to terminate string in an array*/
    char str[] = "HELLO";
    printstr(str);
    return 0;
}
