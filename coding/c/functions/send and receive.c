#include<stdio.h>
int calsum(int x ,int y , int z);
int main(){
    int a , b, c, sum;
    printf("Enter three values\n");
    scanf("%d%d%d",&a,&b,&c);
    sum = calsum (a , b , c);
    printf("sum = %d\n",sum);
    return 0;
}
int calsum(int x ,int y , int z){
    int d = x + y + z;
    return (d);
}
