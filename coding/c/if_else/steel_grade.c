#include<stdio.h>
int main(){
    int hardness,carbon,tensile;
    printf("Enter the hardness\n");
    scanf("%d",&hardness);
    printf("Enter the carbon content\n");
    scanf("%d",&carbon);
    printf("Enter the tensile strength\n");
    scanf("%d",&tensile);
    if((hardness > 50) && (carbon < 0.7) && (tensile > 5600)){
                printf("grade is 10\n");
            }
        
    else if((hardness > 50) && (carbon < 0.7) && (tensile < 5600)){
                printf("grade is 9\n");
            }
    else if((hardness < 50) && (carbon < 0.7) && (tensile > 5600)){
                printf("grade is 8\n");
            }
    else if((hardness > 50) && (tensile > 5600) || (carbon > 0.7)) {
                printf("grade is 7\n");
            }
    else if ((hardness > 50) && (carbon > 0.7) && (tensile < 5600) || (hardness < 50) && (carbon < 0.7) && (tensile < 5600) || (hardness < 50) && (carbon > 0.7) && (tensile > 5600))
    {
    printf("grade is 6\n");
    }
    else {
        printf("grade is 5");
    }
    return 0;
}