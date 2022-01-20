//2105719 Himanshu Mohanty 19/01/2022
#include <stdio.h>

int main()
{
    unsigned int a = 60; 
    unsigned int b = 13; 
    int c = 0;
    c = a & b;
    printf("Line 1 - Value of c is %d\n", c );
    
    c = a|b;
    printf("Line 2 - Value of c is %d\n", c );
    
    c = a ^ b;
    printf("Line 3 - Value of c is %d\n", c );
    
    c = ~a;
    printf("Line 4 - Value of c is %d\n",c );
    
    c = a << 2;
    printf("Line 5 - Value of c is %d\n", c );
    
    c = a>> 2;
    printf("Line 6 - Value of c is %d\n", c );
    return 0;
}