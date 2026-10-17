#include<stdio.h>
main()
{
	int ch;
	
	printf("\n1.Breakfast");
	printf("\n2.Lunch");
	printf("\n3.Dinner");
	printf("\n4.Snack");
	
	printf("\nEnter your choice for meal:");
	scanf("%d",&ch);
	
	switch(ch)
		{
			case 1:
				printf("\npoha");
				break;
				
			case 2:
				printf("\nbiryani");
				break;
				
			case 3:
				printf("\npizza");
				break;
				
			case 4:
				printf("\nsamosa");
				break;
				
			default:
				printf("\nTry some fruits");
		}
}
