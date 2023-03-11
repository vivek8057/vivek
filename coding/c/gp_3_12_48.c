#include<stdio.h>
int main(){
	int i,n;
	printf("Enter Any Number : \n");
	scanf("%d",&n);
	int a = 3;
	for(i=1;i<=n;i++){
		printf("%d\n",a);
		a = a*4;
	}
	return 0;
}
