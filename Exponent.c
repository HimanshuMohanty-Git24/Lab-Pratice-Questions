//exponent
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,exp;
    printf("\nEnter the value of A and B\n");
    scanf("%d%d",&a,&b);
    exp = pow(a,b);
    printf("\nA to the power B:%d\n",exp);
    return 0;
}
