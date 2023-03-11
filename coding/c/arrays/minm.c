#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {9,2,6,3,7,1,8};
    int min = __INT_MAX__;
    for(int i=0;i<=6;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;


}