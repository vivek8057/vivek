#include<stdio.h>
#include<math.h>
int main()
{
    float x;
    printf("enter the value of x\n");
    scanf("%f",&x);
    float si= sin(x);
    float co= cos(x);
    float ta= tan(x);
    float cosec= 1/sin(x);
printf("The values of trigonometric functions are:\n");
printf("%f %f %f %f",si,co,ta,cosec);
return 0;
}