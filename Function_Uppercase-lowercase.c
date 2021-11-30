#include<stdio.h>

int fun(char ch)
{
     
    if (ch>=97 && ch<=122)
    ch = ch-32;

    printf("\nIt's Uppercase = %c\n", ch);
    return 0;
        
}

int main()
{
    int ch;
    printf("Enter the alphabate: ");
    scanf("%c", &ch);
    fun(ch);
    return(0);
}        