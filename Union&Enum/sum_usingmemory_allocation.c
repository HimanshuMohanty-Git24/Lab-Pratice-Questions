//2105719 Himanshu Mohanty 19/01/2022
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n, i, *ptr, sum=0;
printf("Enter number of elements: ");
scanf("%d",&n);
ptr=(int *)malloc(n*sizeof(int));
printf("\n\nEnter elements of array: ");
for(i=0; i<n; ++i)
{
scanf("%d", ptr+i);
sum += *(ptr+i);
}
printf("Sum=%d",sum);
free(ptr);
return 0;
}