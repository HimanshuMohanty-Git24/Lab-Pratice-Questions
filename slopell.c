#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4,m1,m2,t;
    printf("Enter the one points for the line 1 x1 , y1\n");
    scanf("%f%f",&x1,&y1);
    printf("Enter the other points for the line 1 x2 , y2\n");
    scanf("%f%f",&x2,&y2);
    printf("Enter the one points for the line 2 x3 , y3\n");
    scanf("%f%f",&x3,&y3);
    printf("Enter the one points for the line 2 x4 , y4\n");
    scanf("%f%f",&x4,&y4);
    m1 =(y2-y1)/(x2-x1);
    m2 = (y4-y3)/(x4-x3);
    t= m1==m2;

    printf("1 will be printed if two lines be parallel%f\n",t);
    return 0;
}
