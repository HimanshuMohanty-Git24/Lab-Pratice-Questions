//Himasnshu Mohanty 2105719
#include<stdio.h>
int main()
{
    int a[4][4],i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the value for row no %d column no%d\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix entered by you is\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    printf("The matrix in reverse order is\n");
    for(i=3;i>=0;i--)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
    }
}