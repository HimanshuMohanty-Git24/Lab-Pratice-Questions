#include<stdio.h>
struct data
{
    float bp;
    char name[20],gender[10],design[20],dep[20];
};
int main()
{
    int n;
    printf("Enter the number of employees whose data is to be entered\n");
    scanf("%d",&n);
    struct data e[n];
    float gp;
    printf("Enter Employee name,gender,designation,department and basic pay of\n");
    for(int i=0;i<n;i++)
    {
        printf("Employee no %d\n",i+1);
        scanf("%s%s%s%s%f",e[i].name,e[i].gender,e[i].design,e[i].dep,&e[i].bp);
        gp=2*e[i].bp+(0.25*e[i].bp)+(0.75*e[i].bp);
        printf("Gross pay of employee %d is %f\n",i+1,gp);
    }

}