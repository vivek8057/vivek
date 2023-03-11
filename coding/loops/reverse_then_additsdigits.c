#include<stdio.h>
int
main ()
{
  
int n, d5, d4, d3, d2, d1;
  
int reverse = 0;
  
printf ("Enter A Five Digit Number : \n");
  
scanf ("%d", &n);
  
d5 = n % 10;
  
n = n / 10;
  
d4 = n % 10;
  
n = n / 10;
  
d3 = n % 10;
  
n = n / 10;
  
d2 = n % 10;
  
n = n / 10;
  
d1 = n % 10;
  
reverse = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
int sum = d5 + d4 + d3 + d2 + d1;
  
printf ("Your Reverse Number Is %d\n",reverse);
printf("your sum is %d\n",sum);
  
return 0;

 
}
