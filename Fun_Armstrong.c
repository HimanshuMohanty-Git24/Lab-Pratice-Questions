#include<stdio.h>  
#include<math.h>

int fun(int n)    
{    
    int r,sum=0,intial;    
    intial=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=sum+pow(r,3);    
    n=n/10;    
    }    
    if(intial==sum)    
    printf("armstrong  number ");    
    else    
    printf("not armstrong number");    
    return 0;  
}   

int main()
{
    int n;
    printf("enter the number=");    
    scanf("%d",&n); 
    fun(n);
    
}