#include<stdio.h>
main()
{
	char team[30];
	printf("Enter fav ipl team:");
	scanf("%d",&team);
	
	if(team == "Mi")
	{
		printf("\nGo Mumbai Indians!");
	}
	else if(team == "CSK")
	{
		printf("\nChennai Super Kings for the win!");
	}
	else if(team == "RCB")
	{
		printf("\nRoyal Challengers Bengaluru for the win!");
	}
}
