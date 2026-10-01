#include<stdio.h>
#include<string.h>
main()
{
	char team[20];
	printf("\nEnter your favorite IPL team:");
	scanf("%s",&team);
	
	if(strcmp(team, "MI")==0)
	{
		printf("\nMumbai Indians");
	}
	else if(strcmp(team, "CSK")==0)
	{
		printf("\nGo chennai super kings");
	}
	else if(strcmp(team, "GT")==0)
	{
		printf("\nGo Gujarat titans");
	}
	else if(strcmp(team, "RCB" )==0)
	{
		printf("\nGo royal chellenchers bengluru");
	}
	else if(strcmp(team, "KKR")==0)
	{
		printf("\nGo Kolkata Knight Riders");
	}
	else if(strcmp(team, "RR")==0)
	{
		printf("\nGo Rajasthan Royals");
	}
	else if(strcmp(team, "DC")==0)
	{
		printf("\nGo Delhi Capitals");
	}
	else if(strcmp(team, "PBKS")==0)
	{
		printf("\nGo Punjab Kings");
	}
	else if(strcmp(team, "SRH")==0)
	{
		printf("\nGo Sunrisers Hyderabad");
	}
	else if(strcmp(team, "LSG")==0)
	{
		printf("\nGo Lucknow Super Giants");
	}
	else
	{
		printf("\nNot found");
	}
}
