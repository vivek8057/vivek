#include<stdio.h>
int main(){
	float principle,rate,time,si;
	printf("Enter principle : \n");
	scanf("%f",&principle);
	printf("rate : \n");;
	scanf("%f",&rate);
	printf("Enter time : \n");
	scanf("%f",&time);
	si = (principle*rate*time)/100;
	printf("the Simple Interest is : %f\n",si);
	return 0;
}
