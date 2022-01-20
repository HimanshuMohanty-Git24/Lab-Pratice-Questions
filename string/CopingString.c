//2105719 Himanshu Mohanty (12 jan 2021)
#include <stdio.h>
int main() 
{
    char s1[100], s2[100], i;
    printf("Enter Source string: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) 
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("\n\n\tAfter coping\n\n  Destination String: %s", s2);
    return 0;
}