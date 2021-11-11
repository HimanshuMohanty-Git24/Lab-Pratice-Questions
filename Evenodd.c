//Odd even NUmber
#include<stdio.h>

int main()
{
    int num;

    printf("\nEnter the Number: ");
    scanf("%d", &num);

    if(num<0)
        {
            printf("\nThe entered number is negative so we can't check\n");
            return 0;
        }    
        

    if (num%2==0)
        printf("\nThis number is Even\n");

    else    
        printf("\nThis number is Odd\n");

    return 0;
}
