#include<stdio.h>
 int main(){
//     int i = 3;
//     printf("Address of i is %u\n",&i);
//     printf("value of i = %d\n",i);
//     printf("value of i is %d\n",*(&i));
//     return 0;
// 
int i = 3;
int *j;
j = &i;
printf("Address of i = %u\n",&i);
printf("Address of i is %u\n",j);
printf("Address of j = %u\n",j);
printf("value of i = %d\n",i);
printf("value of i = %d\n",*(&i));
printf("value of i = %d\n",*j);
return 0;
}
