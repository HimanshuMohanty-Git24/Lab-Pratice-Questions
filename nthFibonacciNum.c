#include<stdio.h>
int fibonacci(int n)
{
    return(n==1 || n==2?1:fibonacci(n-1)+fibonacci(n-2));
}
int main()
{
    int n,seq;
    printf("Enter the number:");
    scanf("%d",&n);
    seq = fibonacci(n);
    printf("The fibonacci series is:%d",seq);
    return 0;
    
}


