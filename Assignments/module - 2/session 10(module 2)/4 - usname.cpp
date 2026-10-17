#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	char usnm[20];
	char five[6];
	printf("Enter your fullname:");
	scanf("%s",name);
	if(strlen(name)<=5)
	{
		strcpy(usnm,name);
	}
	else
	{
		five[0]=name[0];
		five[1]=name[1];
		five[2]=name[2];
		five[3]=name[3];
		five[4]=name[4];
		five[5]='\0';
		
		strcpy(usnm,five);
	}
	printf("\nUsername:%s",usnm);
}
