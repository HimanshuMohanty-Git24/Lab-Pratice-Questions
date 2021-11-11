#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter the numbers\n");
    scanf("%d", &a);
    printf("enter the numbers\n");
    scanf("%d", &b);
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("enter your operation");
    scanf("%d", &c);
    if (c == 1)
    {
        printf("the addition of a and b is %d", a + b);
    }
    else if (c == 2)
    {
        printf("the subtraction of and b is %d", a - b);
    }
    else if (c == 3)
    {
        printf("the multiplication of a and b is %d", a * b);
    }
    else if (c == 4)
    {
        printf("the division of a and b is %f", (float)a / (float)b);
    }

    return 0;
}