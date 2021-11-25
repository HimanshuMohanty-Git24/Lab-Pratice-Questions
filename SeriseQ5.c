#include <stdio.h>
int main()
{
    int n, i, pr = 0;
    printf("Enter the range of number(Limit):");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        pr = (pr * 2) + 1;
        printf("%d ", pr);
    }
}