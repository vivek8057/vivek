#include<stdio.h>
int main(){
	int i,n;
	printf("Enter Any Number : \n");
	scanf("%d",&n);
	float a=100;
	for(i=1;i<=n;i++){
		printf("%d \n",a);
		a = a/25;
	}
	return 0;
}
