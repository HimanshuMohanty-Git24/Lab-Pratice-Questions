//2105719 Himanshu Mohanty (12 jan 2021)
#include <stdio.h>
int main()
{
char str[100];
int i= 0;
printf("Enter a string: ");
scanf("%s", str);
while(str[i] !='\0')
++i;
printf("\nLength of string: %d\n", i);
return 0;
}