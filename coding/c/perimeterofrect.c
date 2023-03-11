#include<stdio.h>
int main(){
	int a,b,perimeter;
	printf("enter the length of rectangle :\n");
	scanf("%d",&a);
	printf("enter the breadth of rectangle :\n");
	scanf("%d",&b);
	perimeter = 2*(a+b);
	printf("the perimeter of rectangle :%d\n",perimeter);
	return 0;
}
