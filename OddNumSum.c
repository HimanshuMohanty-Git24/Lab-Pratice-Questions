#include <stdio.h>

int main()
{
    int sum = 0, n, count = 0, i;
    for (i = 0; i < 10; i++)
    {
        printf("\n enter the next number:");
        scanf("%d", &n);
        if (n % 2)
        {
            count++;
            sum += n;
        }
    }
    printf("number of odd numbers = %d and sum = %d\n", count, sum);
    return 0;
}