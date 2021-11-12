#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,rad,x1,y1,dis;
    printf("\nEnter the coord. of centere of circle(x,y):");
    scanf("%d %d",&x, &y);
    printf("\nEnter the radius of circle:");
    scanf("%d",&rad);
    printf("\nEnter the point coord.(x1,y1):");
    scanf("%d",&x1,&y1);

    dis = sqrt(pow((x1-x),2) + pow((y1-y),2));
    printf("\nThe distance is :%d",dis);
    
    if(dis > rad)
        printf("\nThe point lies outside the circle\n");
    if(dis==rad)
        printf("\nThe point lies on the circle\n");
    if(dis<rad)
        printf("\nThe point lies inside the circle\n");

    return 0;
}
