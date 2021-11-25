#include <stdio.h>

int main()
{
    long int n,rev_n=0,org_n;
    printf("\nEnter the number : ");
    scanf("%ld",&n);
    org_n = n;
    do
    {
        rev_n = rev_n * 10 + n % 10;
    }
    while(n=n/10);
    printf("\nThe reverse Number is : %ld", rev_n);
    if(org_n==rev_n)
        printf("\nGiven number is a palindrome\n");
    else
        printf("\nGiven number is NOT a palindrome\n");

    return 0;
}