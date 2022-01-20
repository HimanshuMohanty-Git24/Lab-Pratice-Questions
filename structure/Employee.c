//2105719 Himanshu Mohanty 18/01/2022
#include<stdio.h>
struct employee
{
char name[20];
char address[ 30];
int age;
int salary;
};
int main()
{
    struct employee e[20];
    int n,i,j,sum=0,avg=0,eage,esal;

    printf("Enter how many employess's details you want to enter: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Employee %d NAME, ADDRESS, AGE, SALARY: ",i);
        scanf("%s%s%d%d" , e[i].name,e[i].address,&eage,&esal);
        e[i].age=eage;
        e[i].salary=esal;
        sum=sum+e[i].salary;
    }
    printf("Employee Name\tEmployee Address\t     Age\t\tSalary\n");
    avg=sum/n;
    for ( i = 0; i < n; i++)
    {
    printf("%s\t\t%s\t%24d\t\t%d\n",e[i].name,e[i].address,e[i].age,e[i].salary);
    }
    printf("\nAVERAGE SALARY: %d", avg);
    return 0;
}