//2105719 Himanshu Mohanty (12 jan 2021)
#include <stdio.h>
int stringcompare(char *, char *);
int main()
{
    char str1[20];
    char str2[20];
    char ch;
    printf("Enter the first string : ");
    scanf("%s", str1);
    scanf("%c", &ch);
    printf("\nEnter the second string : ");
    scanf("%s", str2);
    int compare = stringcompare(str1, str2);
    if (compare == 0)
        printf("strings are equal");
    else
        printf("strings are not equal");
    return 0;
}
int stringcompare(char *a, char *b)
{
    int flag = 0;
    while (*a != '\0' && *b != '\0')
    {
        if (*a != *b)
        {
            flag = 1;
        }
        a++;
        b++;
    }

    if (flag == 0)
        return 0;
    else
        return 1;
}