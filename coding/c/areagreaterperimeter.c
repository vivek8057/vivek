#include<stdio.h>
int main(){
	int l,b,area,perimeter;
	printf("Enter The Length");
	scanf("%d",&l);
	printf("Enter the breadth");
	scanf("%d",&b);
	area = l * b;
	printf("%d",area);
	perimeter = 2 * ( l + b );
	printf("%d",perimeter);
	if(perimeter > area){
		printf("perimeter is greater than area");
	}
	else{
		printf("perimeter is less than area");
	}
}
