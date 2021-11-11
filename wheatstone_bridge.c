#include<stdio.h>

int main()
{
    float p,q,r,s;
    printf("\nEnter the value of resistance(p,q,r&s):");
    scanf("%f%f%f%f",&p,&q,&r,&s);

    if(p*s==q*r)
        {
        printf("\nThe wheatstone bridge is balanced");
        return 0;
        }

    printf("\nThe wheatstone bridge is NOT balanced");
    s = r*q/p;
    printf("\nChoose S=%f to balance the bridge\n",s);
    return 0;
}
