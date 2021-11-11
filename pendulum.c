#include<stdio.h>
#include<math.h>
#define pi 3.14
#define g 9.8

int main()
{
    float l,t;
    printf("\nTime period when length is 10m:");
    l=10;
    t=2*pi*sqrt(l/g);
    printf("%fsec",t);
    printf("\nTime period when length is 20m:");
    l=20;
    t=2*pi*sqrt(l/g);
    printf("%fsec",t);
    printf("\nTime period when length is 30m:");
    l=30;
    t=2*pi*sqrt(l/g);
    printf("%fsec",t);
    printf("\nTime period when length is 40m:");
    l=40;
    t=2*pi*sqrt(l/g);
    printf("%fsec",t);
    printf("\nTime period when length is 50m:");
    l=50;
    t=2*pi*sqrt(l/g);
    printf("%fsec\n",t);

    return 0;
}
