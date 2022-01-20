//2105719 Himanshu Mohanty 19/01/2022
#include<stdio.h>
struct time
{
	int hour;
	int min;
    int sec;
};

int main()
{
	struct time t1,t2,Final_time;

	printf("Enter First time:");
	scanf("%d:%d:%d",&t1.hour,&t1.min,&t1.sec);

	printf("Enter second time:");
	scanf("%d:%d:%d",&t2.hour,&t2.min,&t2.sec);

	Final_time.hour=t1.hour+t2.hour;
	Final_time.min=t1.min+t2.min;
    Final_time.sec=t1.sec+t2.sec;

	if(Final_time.min>59)
	{
		Final_time.hour++;
		Final_time.min=Final_time.min-60;
	}
    if(Final_time.sec>59)
    {
        Final_time.min++;
        Final_time.sec=Final_time.sec-60;
    }
	printf("\nSum of the two time-->%d:%d:%d",Final_time.hour,Final_time.min,Final_time.sec);
	return 0;
}