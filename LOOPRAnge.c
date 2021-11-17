#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    printf("Enter the range (i-j):");
    scanf("%d%d",&i,&j);

    while(i<j+1)
    {
        printf("%d\n", i);
        i = i+1;
    }    

    return 0;
}