#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter Element %d",i+1);
        scanf("%d",&arr[i]);
        if(arr[i] < 35){
        printf("%d",i);
         }
        printf("\n");
    }
    return 0;
}