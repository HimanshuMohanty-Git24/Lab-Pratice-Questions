#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter the sides for the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    d = a*a;
    e = b*b;
    f = c*c;
    g = d+e;
    h = d+f;
    i = e+f;
    j = d==i || e == h || f==g;
    printf("this is a right anle triangle if it shows 1 and not if shows 0:%d\n",j);
    return 0;
}
