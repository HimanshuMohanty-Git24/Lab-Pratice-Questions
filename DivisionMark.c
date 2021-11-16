//16-Nov-2021
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int p, c, m, e, b, per ;

    printf("Enter marks in five subjects:"); 
    scanf("%d %d %d %d %d", &p, &c, &m, &e,&b);

    per = (int) (p + c + m +e+b+ 4.9)/5;

    if (per >=60)
        printf("\nFirst division\n"); 
    if ( (per >= 50 ) && (per < 60 ) )
        printf ("\nSecond division\n"); 
    if ( (per >= 40 ) && (per < 50)) 
        printf ("\nThird division\n"); 
    if (per < 40)
        printf ("\nFail\n");
    return 0;
}
