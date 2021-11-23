#include <stdio.h>
int main()
{
    int n, i,flag=1,t;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    t = n/2;
    for (i = 2; i <= t; i++)
    {
        if (!(n % i))
        {
            flag=0;
            break;
        }
    }
    if (flag)
        printf("\n % d is a Prime Number\n", n);
    else
        printf("\n % d is not a Prime Number\n", n);
    return 0;
}