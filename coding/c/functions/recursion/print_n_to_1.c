#include<stdio.h>
int increasing(int n){
    if(n==15) return;
    printf("%d\n",n);
    increasing(n+1);
    return ;
}
int main(){
    int n;
    printf("Enter A Number :");
    scanf("%d",&n);
    increasing(n);
    return 0;
}