#include<stdio.h>
main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\nEligible for driving licence");
	}
	if(age>=21)
	{
		printf("\nEligible for credit card");
	}
	if(age>=25)
	{
		printf("\nEligible for car rental");
	}
}
