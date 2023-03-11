#include<stdio.h>
int main(){
    int n,reminder,reverse = 0;
    printf("Enter any Five Digit Number:");
    scanf("%d",&n);
    while(n!=0){
        reminder = n % 10;
        reverse =  reverse * 10 + reminder;
        n /= 10;
    }
    printf("The Reversed Number is %d",reverse);
    return 0;
    
}