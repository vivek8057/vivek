#include<stdio.h>
int main(){
    int arr[35];
    for(int i=0;i<=35;i++){
        printf("Enter the value no. %d\n",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<35;i++){
        if(arr[i]<35){
            printf("%d\n",i);
        }
    }
    return 0;

    
    
}