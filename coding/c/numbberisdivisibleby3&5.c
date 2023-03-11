#include<stdio.h>
int main(){
	int n;
	printf("Enter a Number : \n");
	scanf("%d",&n);
	if(n%5==0 && n%3==0){
		printf("This Number is Divisible by 5");
	}
	else{
		printf("This Number is Not divisible by 5");
	}
	return 0;
}
