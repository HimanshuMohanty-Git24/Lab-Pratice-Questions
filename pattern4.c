#include <stdio.h>
int main()
{
    int n = 7, i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n + 1 - i; j++)
            printf("A");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < n + 1 - i; j++)
            printf("A");
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < n + 1 - i; j++)
            printf("A");
        printf("\n");
    }

    return 0;
}