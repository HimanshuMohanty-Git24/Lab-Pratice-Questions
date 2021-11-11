#include<stdio.h>

int main()
{
    int x,y;
    printf("\nEnter the Coordinate:");
    scanf("%d %d",&x,&y);
    if(x!=0&&y!=0)
        printf("\nPoint lie on plane\n");
    if(x==0)
        printf("\nPoint lies on y axis\n");
    if(y==0)
        printf("\nPoint lies on x axis\n");
    if(x==0&&y==0)
        printf("\nPoint lies on the origin\n");
    return 0;
}
