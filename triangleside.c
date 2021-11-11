#include <stdio.h>
int main()
{
    int a,b,c,t;
    printf("\nGive the value of side A:");
    scanf("%d", &a);
    printf("\nGive the value of side B:");
    scanf("%d",&b);
    printf("\nGive the value of side C:");
    scanf("%d",&c);

    t = (a + b>c) && (b+c>a) && (c + a> b);
    printf("\nDo they satisfy triangle property? 1 for yes, 0 for No :%d\n",t);

    return 0;
}