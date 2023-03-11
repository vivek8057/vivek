#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the sides \n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if((s1 == s2) && (s3 < (s1 + s2)) && (s1 == s3) && (s2 < (s1 + s3)) && (s2 != s3) && (s1 < (s2 + s3))){
        printf("triangle is isosceles");
    }

     if ((s1 == s2) && (s2 == s3) &&(s1 == s3)){
        printf("triangle is equilateral\n");
    }
     if ((s1 != s2) || (s2 != s3) || (s3 != s1)){
        printf("triangle is scalene\n");
    }
   if ((s1 * s1 == (s2 * s2 + s3 * s3)) || (s2 * s2 == (s1 * s1 + s3 * s3)) || (s3 * s3 == (s1 * s1 + s2 * s2))){
        printf("triangle is rightangled\n");
    }
    return 0;

}