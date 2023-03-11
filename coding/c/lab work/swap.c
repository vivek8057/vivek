#include<stdio.h>
int main(){
    int x,y;
    printf("The value of x and y");
    scanf("%d %d",&x,&y);
    swap (&x,&y);
    printf("x = %d\n , y = %d\n",x,y);
    return 0;
    }
    void swap(int *x , int *y)
    {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("the swap result  => ",x,y);
}