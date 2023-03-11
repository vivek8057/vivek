#include<stdio.h>
int add(int a , int b){
    
    return a+b;
}
int main(){
    int a,b,sum;
    printf("Enter two numbers : \n");
    scanf("%d%d",&a,&b);
    sum = add(a,b);
    printf("%d",sum);
    return 0; 
}