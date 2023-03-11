#include<stdio.h>
int main(){
	int i,n;
	int arr[5];
	for(i=0;i<=4;i++){
	printf("Enter ELement number %d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(i=4;i>=0;i--){
	printf("%d ",arr[i]);
	}
	return 0;
}

