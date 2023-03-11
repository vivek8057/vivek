#include<stdio.h>
int sum(int ),arr[i],sum =0;
int main(){
    int terms = 25,i,n=0;
    for(int i=1;i<=terms;i++){
        printf("%d\n",sum(n));
        n++ ;
    }
    return 0;
}
int sum(int n){
    for(int i=1;i<=terms;i++){
        sum = sum + arr[i];
    }
}