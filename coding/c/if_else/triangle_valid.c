#include<stdio.h>
int main(){
	int s1,s2,s3;
	printf("enter the sides\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	
	if((s1<(s2+s3))&&(s2<(s1+s3))&&(s3<(s1+s3))){
		printf("it is a valid triangle");
		
	}
	else
	printf("it is not a valid trianlge");
}