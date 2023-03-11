#include<stdio.h>
int main(){
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	if(n>=100 && n<=999){
		printf("this number is 3 digit's number");
	}
	else{
		printf("this number is not a 3 digit'number");
	}
	return 0;
}
