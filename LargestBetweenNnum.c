#include <stdio.h>
int find_max (int n)
{
int next_num, largest=0, i;
for (i=0; i<n; i++)
{ 
printf("\n Enter next number: ");
scanf("%d", &next_num);
if(next_num> largest) 
    largest=next_num;
}
return (largest);

}
int count_leader (int n)
{
int next_num, largest=0, i, count=0;
for (i=0; i<n; i++)
{
printf("\n Enter next number: ");
scanf("%d", &next_num);
if(next_num> largest)
{
    largest=next_num;
    count++;
}
}
return (count);
}
int main()
{
    int a,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    a = find_max(n);
    printf ("\n Max is %d", a);
    
    printf("\nEnter the number of terms:");
    scanf("%d",&n);
    a=count_leader(n);
    printf ("\n No. of Leaders are %d", a);
    return 0;
}
