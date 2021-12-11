#include<stdio.h>
  
int power(int x,int y)
{
    int powr,i;
    powr=i=1;
    while(i<=y)
    {
        powr = powr*x;
        i++;
    }
    return(powr);
}
int main()
{
    int y,a;
    int x;
    printf("Enter the value of x and y:");
    scanf("%d%d",&x,&y);
    a=power(x, y);
    printf("x^y is :%d", a);
    return 0;
}