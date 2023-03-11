#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    
        printf("Enter no of elements :");
        scanf("%d",&arr[i]);
    }
    int i,c=1;
    for(int i=0;i<n;i++)
    {
        c*=  arr[i];
       
    }
     printf("%d",c);
return 0;
    
}