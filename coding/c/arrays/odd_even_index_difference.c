#include<stdio.h>
int
main ()
{
  
int arr[7] = { 1, 2, 3, 4, 5, 6, 7 }, x, sum1 = 0, sum2 = 0;
  
for (int i = 0; i <= 6; i++)
    {
      
if (i % 2 == 0)
	{
	  
 
sum1 = sum1 + arr[i];
	
 
}
      
      else
	{
	  
 
sum1 = sum1 - arr[i];
	
 
}
    
 
 
}
  
printf ("%d", sum1);

 
}
