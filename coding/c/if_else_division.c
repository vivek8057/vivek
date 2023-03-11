#include<stdio.h>
int main(){
	 int n;
	 printf("Enter Your Number");
	 scanf("%d",n);
	 if(n%5==0 || n%3==0 && n%15 != 0){
	 	printf("your number is divisible by 3_5 but not by 15");
	 }
	 else{
	 	printf("number is not divisible");
	 }
	 return 0;

}
