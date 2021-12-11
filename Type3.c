//Type 3
#include <stdio.h>

int add ()
{
    int n1,n2, n3;
     printf("enter 2 number : ");
    scanf("%d %d",&n1,&n2);
    n3=n1+n2;
    return(n3);
}
int main()
{
    int a;
    a=add();
    printf("the sum is %d",a);
    return 0;
}