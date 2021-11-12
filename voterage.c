#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("you are not eligible to vote\n");
    }
    else if (age >= 18)
    {
        printf("you are eligible to vote\n");
    }

    return 0;
}
