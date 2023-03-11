#include<stdio.h>
int main(){
    int n;
    printf("Enter Your Number : ");
    scanf("%d",&n);

    if(n%2==0){
        printf("Even Number");
    }
    else{
        printf("odd number");
    }
    return 0;
}