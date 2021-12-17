//Himasnshu Mohanty 2105719
#include <stdio.h>
int arr[20];
int display();
int eve(int n);
int posi(int n);
int prim(int n);
int main()
{
    printf("\n\nEnter the numbers\n\n");
    for(int i=0;i<20;i++)
    scanf("%d",&arr[i]);
    int even=0,odd=0,pos=0,neg=0,prime=0;
    for(int i=0;i<20;i++)
    {
        if(eve(arr[i]))
        even++;
        else
        odd++;
        if(posi(arr[i]))
        pos++;
        else
        neg++;
        if(prim(arr[i]))
        prime++;
    }
    printf("Even numbers: %d\nOdd numbers: %d\nPositive: %d\nNegative: %d\nPrime: %d",even,odd,pos,neg,prime);
}
int eve(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}
int posi(int n)
{
    if(n>=0)
    return 1;
    else
    return 0;
}
int prim(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)
    return 1;
    else 
    return 0;
}