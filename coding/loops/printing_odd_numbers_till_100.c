#include<stdio.h>
int main(){
    for(int i=0;i<=100;i++){
       if(i%10==0){
        continue;
       }
         printf("%d\n",i);
       
    }
    return 0;
}