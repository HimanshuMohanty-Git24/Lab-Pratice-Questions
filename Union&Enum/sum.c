//2105719 Himanshu Mohanty 19/01/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, sum =0 ;
    int (*a)[5];
    printf("Enter number of rows: ");
    scanf("%d", &n);
    a = (int (*)[5]) malloc(n * 5 * sizeof(int));
    for(i=0; i< n; i++)
    {
        for (j=0; j<5; ++j)
        {
        printf("Enter the enlement for[%d][%d]",i,j);
        scanf("%d", &a[i][j]);
        sum+= a[i][j];
        }
    }
    printf("\n\nTotal sum=%d",sum);
    return 0;
}