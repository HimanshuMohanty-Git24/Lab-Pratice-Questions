//Himasnshu Mohanty 2105719
#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][2],i,j;
    double d=0.0;
    for(i=0;i<10;i++)
    {
        printf("Enter x%d then y%d for point no %d\n",i+1,i+1,i+1);
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
        if(i>=1) d+=sqrt(pow((a[i][0]-a[i-1][0]),2)+pow((a[i][1]-a[i-1][1]),2));
    }
    printf("The distance of last point from the first point is %lf",d);
}