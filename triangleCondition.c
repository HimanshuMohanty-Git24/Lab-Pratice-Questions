#include <stdio.h>

int main()
{
    float x1, x2, x3, y1, y2, y3, m1, m2, m3;
    printf("enter the input for first point\n");
    scanf("%f%f", &x1, &y1);
    printf("enter the input for second point\n");
    scanf("%f%f", &x2, &y2);
    printf("enter the input for third point\n");
    scanf("%f%f", &x3, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    m3 = (y1 - y3) / (x1 - x3);
    if (m1 != m2 && m1 != m3 && m2 != m3)
    {
        printf("this is a triangle");
    }
    else
    {
        printf("this is not a triangle");
    }

    return 0;
}
