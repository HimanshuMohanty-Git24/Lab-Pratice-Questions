#include<stdio.h>
void swapByRef ( int *x, int *y )
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
   
}
int main()
{
    int a , b;
    printf("\nEnter the a and b: ");
    scanf("%d%d",&a,&b);
    printf ( "Before Swaping\na = %d b = %d", a, b ) ;
    swapByRef( &a, &b);
    printf ( "\nAfter Swaping\na = %d b = %d", a, b );
    return 0;
}