#include<stdio.h>
int main(){
    float overpay;
    int hour,i= 1;
    while (i <= 10){
        printf("Enter the numbers of hour's worked\n");
        scanf("%d",&hour);
        if(hour >= 40){
            overpay = (hour - 40) * 120;
            }
            else {
                overpay = 0;
            }
                printf("your overtime pay is %f\n",overpay);
                i++;
    }
                return 0 ;
}
