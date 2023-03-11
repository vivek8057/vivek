#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the First Number : ");
	scanf("%d",&a);
	printf("Enter the Second Number ");
	scanf("%d",&b);
	if(a > b){
		printf("a is Greater then b");
	}
	else{
		printf("b is greater than a");
	}
	return 0;
}
