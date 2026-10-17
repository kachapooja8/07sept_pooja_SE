#include<stdio.h>
struct time{
	int hours;
	int mini;
};
struct movieshow{
	char mname[20];
	int screen;
	struct time tm;
};
main()
{
	struct movieshow mn={"Pushpa 2",2,{7,30}};
	printf("Movie name:%s,Screen:%d,Time:%02d:%02d",
	mn.mname,mn.screen,mn.tm.hours,mn.tm.mini);
}
