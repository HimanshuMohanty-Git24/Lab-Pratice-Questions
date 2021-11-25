#include <stdio.h>

int main()
{
    int marks, i = 0;
    while (i != 8)
    {
        printf("enter the marks of the student\n");
        scanf("%d", &marks);
        if (marks > 90 && marks < 100)
        {
            i = 1;
        }
        if (marks > 80 && marks < 90)
        {
            i = 2;
        }
        if (marks > 70 && marks < 80)
        {
            i = 3;
        }
        if (marks > 60 && marks < 70)
        {
            i = 4;
        }
        if (marks > 50 && marks < 60)
        {
            i = 5;
        }
        if (marks > 40 && marks < 50)
        {
            i = 6;
        }
        if (marks < 40)
        {
            i = 7;
        }

        switch (i)
        {
        case 1:
            printf("the grade is O\n");
            break;
        case 2:
            printf("the grade is E\n");
            break;
        case 3:
            printf("the grade is A\n");
            break;
        case 4:
            printf("the grade is B\n");
            break;
        case 5:
            printf("the grade is C\n");
            break;
        case 6:
            printf("the grade is D\n");
            break;
        case 7:
            printf("the is F and Fail\n");
            break;
        case 8:
            printf("exit\n");
            break;
        default:
            printf("entered wrong input correct it\n");
            break;
        }
    }

    return 0;
}