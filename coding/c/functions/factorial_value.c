#include<stdio.h>
int fact(){
    int num;
    int factorial;
    printf("Enter number\n");
    scanf("%d",&num);
    factorial = fact(num);
    printf("Factorial of %d = %d\n",num,factorial);
    return 0;
}
int fact(int num){
    int i;
    int factorial = 1;
    for(i=1;i<=num;i++){
        factorial = factorial * i;
        return (factorial);
    }
}
