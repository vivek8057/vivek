#include<stdio.h>
int main(){
    int i,j,rows,column,space;
    printf("Enter the number of rows :\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(int space=1;space<=(rows-i);space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
        }
    
    return 0;
}