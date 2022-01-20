//2105719 Himanshu Mohanty(04/01/2022)
#include<stdio.h>
#include <math.h>

int Prime()
{
   int num, count, i, prime,n;
    printf("Enter the Max range of  Num: ");
    scanf("%d",&n);
    printf("\nPrime Numbers from 1 To %d are :\n",n);

    for (num = 1; num <= n; num++)
    {
        if (num == 1)
        {
            printf("Number 1 is neither prime nor composite\n");
            continue;
        }

        count = sqrt(num);
        prime = 1;
        for (i = 2; i <= count; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
        {
            printf("%d\n", num);
        }
    }

    return 0; 
}
int main()
{
    Prime();
    return 0;
}
