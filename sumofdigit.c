//16-nov-2021
#include<stdio.h>

int main()
{
    int a, n, num;
    int sum = 0;

    printf("\nEnter the number:");
    scanf("%d", &num);
    
    a = num%10;
    n = num/10;
    sum = sum+a;

    again:
    a = n%10;
    n = n/10;
    sum = sum+a;

    if(n!=0)goto again;
    

    
    printf("The sum of digits of number %d is %d\n", num,sum);
    


    return 0;
}