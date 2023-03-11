#include<stdio.h>
int main(){
	float bp,da,hra,grpay;
	printf("enter basic salary of ramesh: \n");
	scanf("%f",&bp);
	da = 0.4*bp;
	hra = 0.2*bp;
	grpay = bp + da + hra;
	printf("basic salary of ramesh = %f\n",bp);
	printf("dearness allowence of ramesh = %f\n",da);
	printf("house rent allowence of ramesh = %f\n",hra);
	printf("gross pay of ramesh = %f\n",grpay);
	return 0;
	}
