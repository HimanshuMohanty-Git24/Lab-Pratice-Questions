#include<stdio.h>

void display2(int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("=");
        
    printf("\n");
    
    return;
}
int main()
{
    int a=10,b=5;
    display2(20);
    printf("function call\n");
    printf("function call\n");
    display2(a);
    printf("function call\n");
    display2(a+b+2);
    printf("function call\n");
    printf("function call\n");
    printf("function call\n");
    return 0;
}               