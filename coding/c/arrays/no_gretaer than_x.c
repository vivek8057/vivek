#include<stdio.h>
int 
main () 
{
  
 
int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
  
 
int count = 0;
int x;
printf("Enter the value of x : ");
  
 
scanf ("%d", &x);
  
 
for (int i = 0; i <= 6; i++)
    
    { if (arr[i] > x)
	
	{ count++; }
      

    
}

 printf ("%d", count);
}


