#include<stdio.h>


void main()
{
    int acc;
    printf("\nEnter the value of accleration:");
    scanf("%d",&acc);
    if(acc==0)
        printf("constant velocity");
    else if(acc>0)
        printf("acceleration");
    else
        printf("deceleration");
}