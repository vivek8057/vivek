#include <stdio.h>
#include <math.h>

void calculate_stats(int num1, int num2, int num3, int num4, int num5, int *sum, float *avg, float *std_dev) {
    *sum = num1 + num2 + num3 + num4 + num5;
    *avg = (float) *sum / 5;
    float variance = ((num1 - *avg)*(num1 - *avg) + (num2 - *avg)*(num2 - *avg) + (num3 - *avg)*(num3 - *avg) + (num4 - *avg)*(num4 - *avg) + (num5 - *avg)*(num5 - *avg)) / 5;
    *std_dev = sqrt(variance);
}

int main() {
    int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;
    int sum;
    float avg, std_dev;
    calculate_stats(num1, num2, num3, num4, num5, &sum, &avg, &std_dev);
    printf("The sum of the numbers is: %d\n", sum);
    printf("The average of the numbers is: %f\n", avg);
    printf("The standard deviation of the numbers is: %f\n", std_dev);
    return 0;
}
