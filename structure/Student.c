//2105719 Himanshu Mohanty 18/01/2022
#include <stdio.h>
struct student 
{
    char Name[50];
    int roll;
    char gender[1];
    float marks;
};

int main() 
{
    struct student s[20];
    int i,n;
    printf("How many student in the institution: ");
    scanf("%d",&n);
    printf("Enter information of students\n");
    for (i = 0; i < n; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].Name);
        printf("Enter gender(M-male/F-female): ");
        scanf("%s",s[i].gender);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n\nDisplaying Information:\n\n");
    for (i = 0; i < n; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: %s",s[i].Name);
        printf("\nGender: %s",s[i].gender);
        printf("\nMarks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}