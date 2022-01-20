//Himasnshu Mohanty 2105719
#include<stdio.h>
int main()
{
    int n,i,j,t;
    printf("Enter n for the order of square matrix n*n\n");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the value for row no %d column no%d\n",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The square matrix entered by you is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            b[i][j]=a[i][j];
        }printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    t=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i][j]!=a[i][j])
            {
                t=0;
                break;
            }
        }
    }
    if(t==1) printf("Symmetric Matrix");
    else printf("Not a Symmetric Matrix");
}