#include<stdio.h>
main()
{
	float mark;
	printf("\nEnter your marks:");
	scanf("%f",&mark);
	
	if(mark>=90)
	{
		printf("\nA grade");
	}
	else if(mark>=75)
	{
		printf("\nB grade");
	}
	else if(mark>=60)
	{
		printf("\nC grade");
	}
	else if(mark>=45)
	{
		printf("\nD grade");
	}
	else if(mark>=0)
	{
		printf("\nFAIL");
	}
}
