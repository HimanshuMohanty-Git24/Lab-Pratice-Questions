#include <stdio.h>

int main()
{
    int i, j, n=5;
    for (int i=0;i<n;i++){
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
        printf("\n");
    }
    for (int i=3;i>=0;i--){
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<n-1-i;j++)
        printf(" ");
        for(j=0;j<2*i+1;j++)
        printf("%d",i+1);
        printf("\n");
    }
    return 0;
}