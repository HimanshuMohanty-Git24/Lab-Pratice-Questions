//calculation of voltage2
#include<stdio.h>

int main()
{
    int v1,v2,n1,n2;
    printf("\nEnter the value of voltage1:\n");
    scanf("%d",&v1);
    printf("\nEnter the value of number of turns N1:\n");
    scanf("%d",&n1);
    printf("\nEnter the value of number of turns N2:\n");
    scanf("%d",&n2);

    //calculation of voltage2
    v2 = v1*n2/n1;

    printf("The value of voltage2:%d volt",v2);

    return 0;
}
