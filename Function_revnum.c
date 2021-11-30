#include <stdio.h>

int fun(int n)
{
    int rev = 0, remainder;
    
    while (n != 0) 
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d\n", rev);
    return 0;
}
int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    fun(n);
    

    return 0;
}
