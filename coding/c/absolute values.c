#include<stdio.h>
int main(){
	int n;
	printf("Enter a Number : \n");
	scanf("%d",&n);
	if(n < 0){
	n = n * (-1);
	printf("%d",n);}
	else{
		printf("%d",n);
	}
	return 0;
}
