#include <stdio.h>

int main()
{
  /*int a=5,b=2; 
      
    printf("a+b= %d\n", a + b); 
    printf("a-b= %d\n", a - b);
    printf("a*b= %d\n", a * b);
    printf("a/b= %d\n", a / b);
    */

  int a, b;

  printf("Enter num a\n");
  scanf("%d", &a);

  printf("Enter num b\n");
  scanf("%d", &b);

  printf("a+b= %d\n", a + b);
  printf("a-b= %d\n", a - b);
  printf("a*b= %f\n", (float)a * (float)b);
  printf("a/b= %f\n", (float)a / (float)b);

  return 0;
}
