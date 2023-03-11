#include<stdio.h>
int  main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i=n;i++){
        scanf("%d \t",&a[i]);
    }
    printf("\n");
   for(int i=0;i=n;i++){
        printf("%d \t",*&a[i]);
    }
}