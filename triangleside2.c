#include <stdio.h>

int main()
{
    int a, b, c, t, s;
    printf("Give the value of side A:");
    scanf("%d",&a);
    printf("Give the value of side B:");
    scanf("%d",&b);
    printf("Give the value of side C:");
    scanf("%d",&c);

    t = (a + b> c) && (b+ c>a) && (c+ a> b);
    s = t*(a +b + c);

    printf("\nDo they satisfy triangle property?");
    printf("\nDisplay: 0 for No, sum of all sides for Yes: %d\n", s);

    return 0;
}
