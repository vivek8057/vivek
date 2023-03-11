#include <stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Element no. " );
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("sum of all values in arr %d", sum);

    return 0;
}