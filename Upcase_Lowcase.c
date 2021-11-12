#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabate: ");
    scanf("%c", &ch);
    
    if (ch>=97 && ch<=122)
    ch = ch-32;

    printf("\nIts Uppercase = %c\n", ch);
    return 0;
}
