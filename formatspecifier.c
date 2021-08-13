#include <stdio.h>

int main()
{
   float b = 5.3333;
   char greet[] = "Hello";
   
   printf("%s\n",greet);
   printf("%8.6f\n",b);
   printf("%10.6f\n",b);
   printf("%10.2f\n",b);
   printf("%-10.2f\n",b);
   printf("%-10.2f hello\n", b);
   return 0;
}
