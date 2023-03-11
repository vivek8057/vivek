#include<stdio.h>
int main(){
	int a,b,x;
	printf("the reminder is : \n");
	scanf("%d %d",&a,&b);
	int q = a/b;
	x = a - b*q;
	printf("%d",x);
	return 0;
}
