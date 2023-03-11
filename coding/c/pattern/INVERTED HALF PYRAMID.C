#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the numbers of rows :\n");
    scanf("%d",&rows);

    for(i=rows;i>0;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}