#include<stdio.h>


int main()
{
    char user;
    int pass;
    printf("enter the username: ");
    scanf("%c",&user);
    if(user=='a')
    {
        printf("Username available\n");
        printf("\nenter password: ");
        scanf("%d",&pass);
        {
        if(pass==12345)
            printf("LOGIN SUCCESSFULL\n");
        else
            printf("WRONG PASSWORD. LOGIN FAILED\n");
        }
    }
    else
        printf("try again");
    
   return 0;
}