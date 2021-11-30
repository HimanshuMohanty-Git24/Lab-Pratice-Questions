#include<stdio.h>

void display2()
{
    int i;
    for(i=0;i<10;i++)
        printf("=");
        
    printf("\n");
    
    return;
}
int main()
{
    display2();
    printf("function call\n");
    printf("function call\n");
    display2();
    printf("function call\n");
    display2();
    printf("function call\n");
    printf("function call\n");
    printf("function call\n");
    return 0;
}       