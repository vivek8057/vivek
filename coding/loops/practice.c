#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter First side Length :");
    scanf("%d",&a);
    printf("Enter Second side Length :");
    scanf("%d",&b);
    printf("Enter Third side Length :");
    scanf("%d",&c);
    float sp = (a+b+c)/2;
    float area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("are of the triangle is %f",area);
    return 0;

}