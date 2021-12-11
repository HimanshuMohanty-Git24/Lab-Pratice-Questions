//Type 4
#include <stdio.h>

int add(int n1,int n2)
{
    int n3;
    n3=n1+n2;
    return(n3);
}
int main()
{
    int a,b,c;
     printf("enter 2 number : ");
    scanf("%d %d",&a,&b);
    c=add(a,b);
    printf("the sum is %d",c);
    return 0;
}