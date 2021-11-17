#include <stdio.h>
int main()
{
    int a, n = 1;
    printf("\nEnter the number :");
    scanf("%d", &a);
    while(a>0)
    {
        n = n*a;
        a--;
    }
    
    printf("\nThe Total value is :%d\n", n);
    return 0;
}    