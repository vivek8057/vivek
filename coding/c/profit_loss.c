#include<stdio.h>
int main(){
	int Cp,Sp,profit,loss;
	printf("Enter the Cp");
	scanf("%d",&Cp);
	printf("Enter the Sp");
	scanf("%d",&Sp);
	if(Sp > Cp ){
		printf("You made profit man");
	}
	else{
		printf("you made loss buddy");
	}
	return 0;
}
