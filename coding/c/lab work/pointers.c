#include<stdio.h>
void main(){
    int num,pnum,*ptr;
    pnum = &num;
    printf("Enter The Number :");
    scanf("%d",&num);
    printf("Value of num is %d :",*ptr);
    printf("Address of num is %u",&num);
}