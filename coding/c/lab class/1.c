#include <stdio.h>
int main()
{
    int number[9];
    int i, a, even = 0, odd = 0;
    printf("Enter any 10 positive integers:\n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &number[i]);
    }
    printf("Entered integers are:\n");
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", number[i]);
    }
    for (a = 0; a <= 9; a++)
    {
        if (number[a] % 2 == 0)
        {
            even++;
        }
        else if (number[a] % 2 != 0)
        {
            odd++;
        }
        else
        {
        }
    }
    printf("Numbers of odd integers: %d\n", odd);
    printf("Numbers of even integers: %d\n", even);

    return 0;
}