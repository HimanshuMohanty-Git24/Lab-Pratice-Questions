#include <stdio.h>
int main()
{
    int marks, age; 
    printf("Enter marks:");
    scanf("%d", &marks);
    printf("\nEnter age:");
    scanf("%d", &age);

    marks = marks + 40; 

    if (age< 50) 
         marks = marks + 20;

    printf("\nThe assigned mark is:%d",marks);

    return 0;
}