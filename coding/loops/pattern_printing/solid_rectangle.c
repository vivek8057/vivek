#include<stdio.h>
int main(){
    int n;
    printf("Enter number of rows :");
    scanf("%d",&n);
    int m;
    printf("numbers of columns");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}