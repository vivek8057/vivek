#include<stdio.h>
int main(){
	float km,m,cm,f,i;
	scanf("%f",&km);
	m = km*1000;
	cm = m*100;
	i = cm/2.54;
	f = i/12;
	printf("distance in meters %f\n",m);
	printf("distance in centimeters %f\n",cm);
	printf("distance in inch %f\n",i);
	printf("distance in foot %f\n",f);	
	return 0;
}
