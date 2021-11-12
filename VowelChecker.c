#include <stdio.h>

int main()
{
    char ch;
    int lowercase_Vowel, uppercase_Vowel;

    printf("Please Enter an alphabet:");
    scanf(" %c", &ch);

    lowercase_Vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_Vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lowercase_Vowel || uppercase_Vowel)
    {
        printf("\n%c is a VOWEL.\n", ch);
    }
    else
    {
        printf("\n%c is a CONSONANT.\n", ch);
    }
    return 0;
}
