#include<stdio.h>
int main(){
	int n;
	printf("Enter Year : \n");
	scanf("%d",&n);
	if(n%4==0 || n%400!=0){
		printf("Leap Year");
	}
	else{
		printf("not a Leap Year");
	}
}
