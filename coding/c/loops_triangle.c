#include<stdio.h>
int main(){
    int a,b,c ;
    printf("Enter the sides");
    scanf("%d %d %d",&a,&b,&c);
    if(a < (b+c) && b < (a+c) && c < (a+b)){
        printf("Triangle is possible");
    }
    
    else if(a * a < b * b + c * c || b * b < a * a + c * c || c * c < a * a + b * b){
        printf("Acute angled triangle");
  }
 
  else if(a * a > b * b + c * c && b * b > a * a + c * c && c * c > a * a + b * b){
        printf("Obtuse angled triangle");
}
 else if( a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b){
        printf("Right angled triangle");
        }
        return 0;
}