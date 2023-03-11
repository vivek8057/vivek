#include<stdio.h>
int main(){
    float basic,HRA,DA,gross;
    printf("basic salary of the employee\n");
    scanf("%f",&basic);
    if (basic <= 100000){
        DA = basic * 0.08;
        HRA = basic * 0.02;
    }
    else if (basic <= 200000){
        DA = basic * 0.80;
        HRA = basic * 0.25;
    }
    else if (basic <= 200000){
        DA = basic * 0.30;
        HRA = basic * 0.95;
    }
    gross = basic + DA + HRA;
    printf("GROSS SALARY OF EMPLOYEE = %.2f",gross);
    return 0;
}