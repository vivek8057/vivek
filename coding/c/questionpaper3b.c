#include<stdio.h>
int main(){
	int a = 1,value;
	value = a++ + ++a + ++a;
	printf("%d",value);
	return 0;
}
