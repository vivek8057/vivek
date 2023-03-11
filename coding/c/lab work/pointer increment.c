#include<stdio.h>
void main(){
    int number = 50;
    int *ptr = &number;
    printf("address is %u \n",ptr);
    ptr++;
    printf("after increment address is %u",ptr);
}