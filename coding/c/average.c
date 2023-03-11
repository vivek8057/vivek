#include<stdio.h>
int main(){
	int a,b,c,Average;
	printf("Enter the First number : ");
	scanf("%d",&a);
	printf("Enter the Second number : ");
	scanf("%d",&b);
	printf("Enter the Third number : ");
	scanf("%d",&c);
	Average = (a + b + c)/3;
	printf("The Average of Three Numbers is %d",Average);
}
