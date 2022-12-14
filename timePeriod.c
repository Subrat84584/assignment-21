//7.write a program to calculate the difference between two times periods.
#include<stdio.h>
struct Time
{
	int hour;
	int minutes;
	int second;
};
int main()
{
	struct Time start,stop,diff;
	printf("enter the start times hours,minutes and second");
    scanf("%d%d%d",&start.hour,&start.minutes,&start.second);
	printf("enter the stop times hour,minutes and second");
	scanf("%d%d%d",&stop.hour,&stop.minutes,&stop.second);
	if(start.second>stop.second)
	 {
	 	stop.second+=60;
	 	--stop.minutes;
	 }
	 
	 if(start.minutes>stop.minutes)
	 {
	 	stop.minutes+=60;
	 	--stop.hour;
	 }
	 
	 diff.second=stop.second-start.second;
	 diff.minutes=stop.minutes-stop.minutes;
	 diff.hour=stop.hour-stop.hour;
	 printf("hour:%d min:%d sec:%d",diff.hour,diff.minutes,diff.second);
	 return 0;
	 
}
