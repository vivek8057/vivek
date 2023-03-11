#include<stdio.h>
int main(){
	int n,m,p;
	printf("Enter Your 1 Number \n");
	scanf("%d",&n);
	printf("Enter Your 2 Number \n");
	scanf("%d",&m);
	printf("Enter your 3 number \n");
	scanf("%d",&p);
	if(n > m){
		printf("n is greater than m \n");
	}
	else{
		printf("n is lesser than m \n");
	}
	if(m > p){
		printf("m is greater than p \n");
	}
	else{
		printf("m is lesser than p \n");
	}
	return 0;
	
}
