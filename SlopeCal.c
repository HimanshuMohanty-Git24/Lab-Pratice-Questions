#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2;
    float s1;
    printf("\nEnter the value of x1 and y1 coord. of first point:");
    scanf("%f%f", &x1,&y1);
    printf("\nEnter the value of x2 and y2 coord. of second point:");
    scanf("%f%f", &x2,&y2);

    //calculation of slope
    s1 = (y2-y1)/(x2-x1);

    printf("\nSlope of the line is : %f", s1);
   
    return 0;
}
