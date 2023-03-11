#include<stdio.h>
int main(){
	int i,n;
	printf("Enter A Number : \n");
	scanf("%d",&n);
	int a = 1;
	for(i=1;i<=n;i++){
		printf("%d\n",a);
		a = a*2;
	}
	return 0;
}
