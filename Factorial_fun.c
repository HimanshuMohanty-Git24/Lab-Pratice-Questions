#include<stdio.h>
int factorial (long int n)
{
    return (n==1?1:n*factorial(n-1));
}

int main()
{
    long int a, fact;
    printf ("\nEnter any number:");
    scanf ("%d",&a);
    fact=factorial(a);
    printf("Factorial value = %d", fact);
    return 0;
}
