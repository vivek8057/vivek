#include<stdio.h>
int main(){
	int n;
	printf("Enter Your number : \n");
	scanf("%d",&n);
	if(n%5==0 || n%3==0){
		printf("Number is Divisible by 5 or 3");
	}
	else{
		printf("Number is not divisible by 5 or 3");
	}
	return 0;
}
