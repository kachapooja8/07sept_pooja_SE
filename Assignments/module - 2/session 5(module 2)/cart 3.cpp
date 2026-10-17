#include<stdio.h>
main()
{
	int amt;
	printf("Enter final amount:");
	scanf("%d",&amt);
	
	if(amt>2000)
	{
		amt = amt - (amt * 20 / 100);
		printf("\n20%% discount:%d",amt);
	}
	else if(amt>1000)
	{
		amt = amt - (amt * 10 / 100);
		printf("\n10%% discount:%d",amt);
	}
	else
	{
		printf("no discount:%d",amt);
	}
}
