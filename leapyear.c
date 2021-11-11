#include <stdio.h>

int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("this is your leap year\n");
            }
            else
            {
                printf("not a leap year\n");
            }
        }
        else
        {
            printf("not a leap year\n");
        }
    }
    else
    {
        printf("not your leap year\n");
    }
    return 0;
}