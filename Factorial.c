#include <stdio.h>
int main()
{
    int a, n = 1;
    printf("\nEnter the number :");
    scanf("%d", &a);
    start:
    n = n * a;
    a--;
    if (a > 0)
    {
        goto start;
    }
    printf("\nThe Total value is :%d\n", n);
    return 0;
}