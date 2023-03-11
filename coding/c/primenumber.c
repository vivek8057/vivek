#include<stdio.h>
int main(){
    int i,n;
    int factor = 0;
    printf("Enter A Number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if( n%i==0)
        factor = factor + 1;
    }
    if (factor == 2){
        printf("Prime Number");
    }
    else{
    	printf("composite Number");
	}
    return 0;
}
