#include<stdio.h>
#include<string.h>
main()
{
	char us1[20];
	char us2[20];
	printf("Enter username1:");
	scanf("%s",us1);
	printf("Enter username2:");
	scanf("%s",us2);
	if(strcmp(us1,us2)==0)
	{
		printf("\nBoth names are same");
	}
	else
	{
		printf("\nBoth names are diffrent");
	}
}
