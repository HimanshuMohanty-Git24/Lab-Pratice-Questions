#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    
    for (int i=0;i<n;i++)
    {
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<2*n-2-2*i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<2*n-2-2*i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        printf("\n");
    }
    for (int i=3;i>=0;i--)
    {
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<2*n-2-2*i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        for(j=0;j<2*n-2-2*i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("$");
        printf("\n");
    }
    return 0;
}
  