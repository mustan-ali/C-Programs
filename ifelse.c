#include <stdio.h>

int main()
{
 int income;
 double tax;

 printf("Enter your Income\n");
 scanf("%d",&income);

if (income<10000){
  printf("No Tax\n");
}

else if(income>=10000 || income<=50000) {
tax = income * 15/100;
printf("Tax =%0.2lf\n",tax);
}

else{
  tax = income * (25/100);
  printf("Tax =%0.2lf\n", tax);
}

return 0;
}
