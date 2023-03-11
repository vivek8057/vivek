#include<stdio.h>
int
main ()
{
  
int n;
  
printf ("Enter the size of array  : ");
  
scanf ("%d", &n);
  
for (int i = 0; i < n; i++)
    {
      
int arr[i];
      
printf ("Enter the elements : ");
      
scanf ("%d", &arr[i]);
    
} 
int i, arr[i], max = arr[0];
  
for (int i = 0; i < n; i++)
    {
      
if (max < arr[i])
	{
	  
max = arr[i];
	
}
    
}
  
printf ("maxm value is %d :",max);
  
return 0;

}
