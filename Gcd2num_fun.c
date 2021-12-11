#include <stdio.h>

int gcd(int n1,int n2)
{
    int t;
    if(n1%n2==0)
    return n2;
    else
    return(t=gcd(n2,n1%n2));
   
}

int main()
{
    int g,a,b;
    printf("enter two positive integers:");
    scanf("%d%d",&a,&b);
    g=gcd(a,b);
    printf("GCD of %d and %d in %d",a,b,g);
    return 0;
}