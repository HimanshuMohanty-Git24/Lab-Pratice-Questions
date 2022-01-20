//2105719 Himanshu Mohanty (12 jan 2021)
#include<stdio.h>

int length( char *s)
{
int k = -1;
while(s[++k]) ;
return k;
}

int main()
{
char s1[100], s2[100], ch;
int i, j;
printf("Enter first string: ");
scanf("%s", s1);
scanf("%c", &ch);
printf("\nEnter second string: ");
scanf("%s", s2);
i=0;
j=length(s1);
while(s1[j++]=s2[i++]) ;
printf("After concatenation: %s",s1);
return 0;
}