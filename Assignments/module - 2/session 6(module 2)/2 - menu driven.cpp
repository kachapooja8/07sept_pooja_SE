#include<stdio.h>
main()
{
	int a;
	char team[20][50]={
		"Mumbai Indians",
		"Chennai Super Kings",
		"Royal Challengers Bengaluru"
	};
	int count=3;
	int i;
	
	while(1)
	{
	printf("\n1.View fav IPL team.");
	printf("\n2.Add new team.");
	printf("\n3.Exit");
	
	printf("\nEnter your choice:");
	scanf("%d",&a);
	
	
	if(a==1)
	{
		printf("\nYour Favorite IPL Teams:\n"); 
		for(i=0;i<count;i++) 
		{ 
			printf("%d. %s\n", i + 1, team[i]); 
		}	
	}
	else if(a==2)
	{
		printf("\nEnter new team: "); 
		scanf(" %[^\n]", team[count]);
		count++;
		
		printf("\nnew team added successfully");
	}
	else if(a==3)
	{
		printf("\nprogram exited.");
		break;
	}
	else
	{
		printf("\ninvalid choice");
	}
}
}
