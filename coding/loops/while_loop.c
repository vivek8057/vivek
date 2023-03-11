#include<stdio.h>
int main(){
    int p,n,count;
    float r,si;
    count = 1;
    while (count <=3){
        printf("Enter Values of p,n,r\n");
        scanf("%d%d%f",&p,&n,&r);
        si = (p * r * n) / 100;
        printf("Simple Intersest = Rs %f",si);
        count = count + 1;
    }
    return 0;
}