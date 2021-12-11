//Type2
#include<stdio.h>
int add()
{
    int no1, no2, res;

    printf("Enter two numbers:");
    scanf("%d%d",&no1, &no2);
    res=no1+no2;
    return (res); 
} 
void main()
{
    int sum;

    sum=add();

    printf("The Sum of two numbers are\n%d", sum);
}